/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:19 2012
 *
 * Copyright (c) 2010 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt.
 * 
 * This file may be used under the terms of the GNU General Public
 * License versions 2.0 or 3.0 as published by the Free Software
 * Foundation and appearing in the files LICENSE.GPL2 and LICENSE.GPL3
 * included in the packaging of this file.  Alternatively you may (at
 * your option) use any later version of the GNU General Public
 * License if such license has been publicly approved by Riverbank
 * Computing Limited (or its successors, if any) and the KDE Free Qt
 * Foundation. In addition, as a special exception, Riverbank gives you
 * certain additional rights. These rights are described in the Riverbank
 * GPL Exception version 1.1, which can be found in the file
 * GPL_EXCEPTION.txt in this package.
 * 
 * Please review the following information to ensure GNU General
 * Public Licensing requirements will be met:
 * http://trolltech.com/products/qt/licenses/licensing/opensource/. If
 * you are unsure which license is appropriate for your use, please
 * review the following information:
 * http://trolltech.com/products/qt/licenses/licensing/licensingoverview
 * or contact the sales department at sales@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtGui.h"

#line 937 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qgenericmatrix.sip"
#include <qgenericmatrix.h>
#line 39 "sipQtGuiQMatrix2x2.cpp"



extern "C" {static PyObject *meth_QMatrix2x2_data(PyObject *, PyObject *);}
static PyObject *meth_QMatrix2x2_data(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMatrix2x2 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMatrix2x2, &sipCpp))
        {
            PyObject * sipRes = 0;
            sipErrorState sipError = sipErrorNone;

#line 1009 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qgenericmatrix.sip"
        sipError = qtgui_matrixDataAsList(4, sipCpp->constData(), &sipRes);
#line 58 "sipQtGuiQMatrix2x2.cpp"

            if (sipError == sipErrorFail)
                return 0;

            if (sipError == sipErrorNone)
            {
            return sipRes;
            }

            sipAddException(sipError, &sipParseErr);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix2x2, sipName_data, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QMatrix2x2_copyDataTo(PyObject *, PyObject *);}
static PyObject *meth_QMatrix2x2_copyDataTo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMatrix2x2 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMatrix2x2, &sipCpp))
        {
            PyObject * sipRes = 0;
            sipErrorState sipError = sipErrorNone;

#line 1014 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qgenericmatrix.sip"
        qreal values[4];

        sipCpp->copyDataTo(values);
        sipError = qtgui_matrixDataAsList(4, values, &sipRes);
#line 97 "sipQtGuiQMatrix2x2.cpp"

            if (sipError == sipErrorFail)
                return 0;

            if (sipError == sipErrorNone)
            {
            return sipRes;
            }

            sipAddException(sipError, &sipParseErr);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix2x2, sipName_copyDataTo, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QMatrix2x2_isIdentity(PyObject *, PyObject *);}
static PyObject *meth_QMatrix2x2_isIdentity(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMatrix2x2 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMatrix2x2, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isIdentity();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix2x2, sipName_isIdentity, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QMatrix2x2_setToIdentity(PyObject *, PyObject *);}
static PyObject *meth_QMatrix2x2_setToIdentity(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMatrix2x2 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMatrix2x2, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setToIdentity();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix2x2, sipName_setToIdentity, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QMatrix2x2_fill(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QMatrix2x2_fill(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QMatrix2x2 *sipCpp;

        static const char *sipKwdList[] = {
            sipName_value,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "Bd", &sipSelf, sipType_QMatrix2x2, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->fill(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix2x2, sipName_fill, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QMatrix2x2_transposed(PyObject *, PyObject *);}
static PyObject *meth_QMatrix2x2_transposed(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMatrix2x2 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMatrix2x2, &sipCpp))
        {
            QMatrix2x2 *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QMatrix2x2(sipCpp->transposed());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QMatrix2x2,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix2x2, sipName_transposed, NULL);

    return NULL;
}


extern "C" {static PyObject *slot_QMatrix2x2___ne__(PyObject *,PyObject *);}
static PyObject *slot_QMatrix2x2___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QMatrix2x2 *sipCpp = reinterpret_cast<QMatrix2x2 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMatrix2x2));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QMatrix2x2 * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QMatrix2x2, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QMatrix2x2::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QMatrix2x2,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QMatrix2x2___eq__(PyObject *,PyObject *);}
static PyObject *slot_QMatrix2x2___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QMatrix2x2 *sipCpp = reinterpret_cast<QMatrix2x2 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMatrix2x2));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QMatrix2x2 * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QMatrix2x2, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QMatrix2x2::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QMatrix2x2,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QMatrix2x2___idiv__(PyObject *,PyObject *);}
static PyObject *slot_QMatrix2x2___idiv__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMatrix2x2)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QMatrix2x2 *sipCpp = reinterpret_cast<QMatrix2x2 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMatrix2x2));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        qreal a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1d", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QMatrix2x2::operator/=(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QMatrix2x2___imul__(PyObject *,PyObject *);}
static PyObject *slot_QMatrix2x2___imul__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMatrix2x2)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QMatrix2x2 *sipCpp = reinterpret_cast<QMatrix2x2 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMatrix2x2));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        qreal a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1d", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QMatrix2x2::operator*=(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QMatrix2x2___isub__(PyObject *,PyObject *);}
static PyObject *slot_QMatrix2x2___isub__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMatrix2x2)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QMatrix2x2 *sipCpp = reinterpret_cast<QMatrix2x2 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMatrix2x2));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QMatrix2x2 * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QMatrix2x2, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QMatrix2x2::operator-=(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QMatrix2x2___iadd__(PyObject *,PyObject *);}
static PyObject *slot_QMatrix2x2___iadd__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMatrix2x2)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QMatrix2x2 *sipCpp = reinterpret_cast<QMatrix2x2 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMatrix2x2));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QMatrix2x2 * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QMatrix2x2, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QMatrix2x2::operator+=(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static int slot_QMatrix2x2___setitem__(PyObject *,PyObject *);}
static int slot_QMatrix2x2___setitem__(PyObject *sipSelf,PyObject *sipArgs)
{
    QMatrix2x2 *sipCpp = reinterpret_cast<QMatrix2x2 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMatrix2x2));

    if (!sipCpp)
        return -1;

    PyObject *sipParseErr = NULL;

    {
        PyObject * a0;
        qreal a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "P0d", &a0, &a1))
        {
            sipErrorState sipError = sipErrorNone;

#line 1035 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qgenericmatrix.sip"
        int row, column;

        if ((sipError = qtgui_matrixParseIndex(a0, 2, 2, &row, &column)) == sipErrorNone)
            sipCpp->operator()(row, column) = a1;
#line 488 "sipQtGuiQMatrix2x2.cpp"

            if (sipError == sipErrorFail)
                return -1;

            if (sipError == sipErrorNone)
            {
            return 0;
            }

            sipAddException(sipError, &sipParseErr);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix2x2, sipName___setitem__, NULL);

    return -1;
}


extern "C" {static PyObject *slot_QMatrix2x2___getitem__(PyObject *,PyObject *);}
static PyObject *slot_QMatrix2x2___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
    QMatrix2x2 *sipCpp = reinterpret_cast<QMatrix2x2 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMatrix2x2));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        PyObject * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1P0", &a0))
        {
            PyObject * sipRes = 0;
            sipErrorState sipError = sipErrorNone;

#line 1022 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qgenericmatrix.sip"
        int row, column;

        if ((sipError = qtgui_matrixParseIndex(a0, 2, 2, &row, &column)) == sipErrorNone)
        {
            sipRes = PyFloat_FromDouble(sipCpp->operator()(row, column));

            if (!sipRes)
                sipError = sipErrorFail;
        }
#line 537 "sipQtGuiQMatrix2x2.cpp"

            if (sipError == sipErrorFail)
                return 0;

            if (sipError == sipErrorNone)
            {
            return sipRes;
            }

            sipAddException(sipError, &sipParseErr);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix2x2, sipName___getitem__, NULL);

    return 0;
}


extern "C" {static PyObject *slot_QMatrix2x2___repr__(PyObject *);}
static PyObject *slot_QMatrix2x2___repr__(PyObject *sipSelf)
{
    QMatrix2x2 *sipCpp = reinterpret_cast<QMatrix2x2 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMatrix2x2));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 964 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qgenericmatrix.sip"
        bool bad = false;
        int i;
        PyObject *m[4];
        qreal data[4];

        // The raw data is in column-major order but we want row-major order.
        sipCpp->copyDataTo(data);

        for (i = 0; i < 4; ++i)
        {
            m[i] = PyFloat_FromDouble(data[i]);

            if (!m[i])
                bad = true;
        }

        if (!bad)
        {
#if PY_MAJOR_VERSION >= 3
            sipRes = PyUnicode_FromFormat("PyQt4.QtGui.QMatrix2x2("
                    "%R, %R, "
                    "%R, %R)",
                    m[0], m[1],
                    m[2], m[3]);
#else
            sipRes = PyString_FromString("PyQt4.QtGui.QMatrix2x2(");

            for (i = 0; i < 4; ++i)
            {
                if (i != 0)
                    PyString_ConcatAndDel(&sipRes, PyString_FromString(", "));

                PyString_ConcatAndDel(&sipRes, PyObject_Repr(m[i]));
            }

            PyString_ConcatAndDel(&sipRes, PyString_FromString(")"));
#endif
        }

        for (i = 0; i < 4; ++i)
            Py_XDECREF(m[i]);
#line 613 "sipQtGuiQMatrix2x2.cpp"

            return sipRes;
        }
    }
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QMatrix2x2(void *, const sipTypeDef *);}
static void *cast_QMatrix2x2(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QMatrix2x2)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QMatrix2x2(void *, int);}
static void release_QMatrix2x2(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QMatrix2x2 *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static PyObject *pickle_QMatrix2x2(void *);}
static PyObject *pickle_QMatrix2x2(void *sipCppV)
{
    QMatrix2x2 *sipCpp = reinterpret_cast<QMatrix2x2 *>(sipCppV);
    PyObject *sipRes;

#line 941 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qgenericmatrix.sip"
        qreal data[4];

        // We want the data in row-major order.
        sipCpp->copyDataTo(data);

        sipRes = Py_BuildValue((char *)"dddd",
                data[0], data[1],
                data[2], data[3]);
#line 659 "sipQtGuiQMatrix2x2.cpp"

    return sipRes;
}


extern "C" {static void assign_QMatrix2x2(void *, SIP_SSIZE_T, const void *);}
static void assign_QMatrix2x2(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QMatrix2x2 *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QMatrix2x2 *>(sipSrc);
}


extern "C" {static void *array_QMatrix2x2(SIP_SSIZE_T);}
static void *array_QMatrix2x2(SIP_SSIZE_T sipNrElem)
{
    return new QMatrix2x2[sipNrElem];
}


extern "C" {static void *copy_QMatrix2x2(const void *, SIP_SSIZE_T);}
static void *copy_QMatrix2x2(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QMatrix2x2(reinterpret_cast<const QMatrix2x2 *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QMatrix2x2(sipSimpleWrapper *);}
static void dealloc_QMatrix2x2(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QMatrix2x2(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_QMatrix2x2(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QMatrix2x2(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QMatrix2x2 *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QMatrix2x2();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QMatrix2x2 * a0;

        static const char *sipKwdList[] = {
            sipName_other,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9", sipType_QMatrix2x2, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QMatrix2x2(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        PyObject * a0;

        static const char *sipKwdList[] = {
            sipName_values,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "P0", &a0))
        {
            sipErrorState sipError = sipErrorNone;

#line 956 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qgenericmatrix.sip"
        qreal values[4];

        if ((sipError = qtgui_matrixDataFromSequence(a0, 4, values)) == sipErrorNone)
            sipCpp = new QMatrix2x2(values);
#line 745 "sipQtGuiQMatrix2x2.cpp"

            if (sipError == sipErrorNone)
                return sipCpp;

            if (sipUnused)
            {
                Py_XDECREF(*sipUnused);
            }

            sipAddException(sipError, sipParseErr);

            if (sipError == sipErrorFail)
                return NULL;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QMatrix2x2[] = {
    {(void *)slot_QMatrix2x2___ne__, ne_slot},
    {(void *)slot_QMatrix2x2___eq__, eq_slot},
    {(void *)slot_QMatrix2x2___idiv__, idiv_slot},
    {(void *)slot_QMatrix2x2___imul__, imul_slot},
    {(void *)slot_QMatrix2x2___isub__, isub_slot},
    {(void *)slot_QMatrix2x2___iadd__, iadd_slot},
    {(void *)slot_QMatrix2x2___setitem__, setitem_slot},
    {(void *)slot_QMatrix2x2___getitem__, getitem_slot},
    {(void *)slot_QMatrix2x2___repr__, repr_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QMatrix2x2[] = {
    {SIP_MLNAME_CAST(sipName_copyDataTo), meth_QMatrix2x2_copyDataTo, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_data), meth_QMatrix2x2_data, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_fill), (PyCFunction)meth_QMatrix2x2_fill, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_isIdentity), meth_QMatrix2x2_isIdentity, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setToIdentity), meth_QMatrix2x2_setToIdentity, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_transposed), meth_QMatrix2x2_transposed, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QMatrix2x2 = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QMatrix2x2,
        {0}
    },
    {
        sipNameNr_QMatrix2x2,
        {0, 0, 1},
        6, methods_QMatrix2x2,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QMatrix2x2,
    init_QMatrix2x2,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QMatrix2x2,
    assign_QMatrix2x2,
    array_QMatrix2x2,
    copy_QMatrix2x2,
    release_QMatrix2x2,
    cast_QMatrix2x2,
    0,
    0,
    pickle_QMatrix2x2
},
    0,
    0,
    0
};
