/* soapClient.cpp
   Generated by gSOAP 2.8.11 from quote.h

Copyright(C) 2000-2012, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
1) GPL or 2) Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#if defined(__BORLANDC__)
#pragma option push -w-8060
#pragma option push -w-8004
#endif
#include "soapH.h"

SOAP_SOURCE_STAMP("@(#) soapClient.cpp ver 2.8.11 2012-11-15 01:00:52 GMT")


SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__GetQuote(struct soap *soap, const char *soap_endpoint, const char *soap_action, _ns1__GetQuote *ns1__GetQuote, _ns1__GetQuoteResponse *ns1__GetQuoteResponse)
{	struct __ns1__GetQuote soap_tmp___ns1__GetQuote;
	if (!soap_endpoint)
		soap_endpoint = "http://ws.cdyne.com/delayedstockquote/delayedstockquote.asmx";
	if (!soap_action)
		soap_action = "http://ws.cdyne.com/GetQuote";
	soap->encodingStyle = NULL;
	soap_tmp___ns1__GetQuote.ns1__GetQuote = ns1__GetQuote;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns1__GetQuote(soap, &soap_tmp___ns1__GetQuote);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__GetQuote(soap, &soap_tmp___ns1__GetQuote, "-ns1:GetQuote", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__GetQuote(soap, &soap_tmp___ns1__GetQuote, "-ns1:GetQuote", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns1__GetQuoteResponse)
		return soap_closesock(soap);
	ns1__GetQuoteResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__GetQuoteResponse->soap_get(soap, "ns1:GetQuoteResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__GetQuickQuote(struct soap *soap, const char *soap_endpoint, const char *soap_action, _ns1__GetQuickQuote *ns1__GetQuickQuote, _ns1__GetQuickQuoteResponse *ns1__GetQuickQuoteResponse)
{	struct __ns1__GetQuickQuote soap_tmp___ns1__GetQuickQuote;
	if (!soap_endpoint)
		soap_endpoint = "http://ws.cdyne.com/delayedstockquote/delayedstockquote.asmx";
	if (!soap_action)
		soap_action = "http://ws.cdyne.com/GetQuickQuote";
	soap->encodingStyle = NULL;
	soap_tmp___ns1__GetQuickQuote.ns1__GetQuickQuote = ns1__GetQuickQuote;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns1__GetQuickQuote(soap, &soap_tmp___ns1__GetQuickQuote);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__GetQuickQuote(soap, &soap_tmp___ns1__GetQuickQuote, "-ns1:GetQuickQuote", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__GetQuickQuote(soap, &soap_tmp___ns1__GetQuickQuote, "-ns1:GetQuickQuote", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns1__GetQuickQuoteResponse)
		return soap_closesock(soap);
	ns1__GetQuickQuoteResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__GetQuickQuoteResponse->soap_get(soap, "ns1:GetQuickQuoteResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__GetQuoteDataSet(struct soap *soap, const char *soap_endpoint, const char *soap_action, _ns1__GetQuoteDataSet *ns1__GetQuoteDataSet, _ns1__GetQuoteDataSetResponse *ns1__GetQuoteDataSetResponse)
{	struct __ns1__GetQuoteDataSet soap_tmp___ns1__GetQuoteDataSet;
	if (!soap_endpoint)
		soap_endpoint = "http://ws.cdyne.com/delayedstockquote/delayedstockquote.asmx";
	if (!soap_action)
		soap_action = "http://ws.cdyne.com/GetQuoteDataSet";
	soap->encodingStyle = NULL;
	soap_tmp___ns1__GetQuoteDataSet.ns1__GetQuoteDataSet = ns1__GetQuoteDataSet;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns1__GetQuoteDataSet(soap, &soap_tmp___ns1__GetQuoteDataSet);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__GetQuoteDataSet(soap, &soap_tmp___ns1__GetQuoteDataSet, "-ns1:GetQuoteDataSet", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__GetQuoteDataSet(soap, &soap_tmp___ns1__GetQuoteDataSet, "-ns1:GetQuoteDataSet", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns1__GetQuoteDataSetResponse)
		return soap_closesock(soap);
	ns1__GetQuoteDataSetResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__GetQuoteDataSetResponse->soap_get(soap, "ns1:GetQuoteDataSetResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__GetQuote_(struct soap *soap, const char *soap_endpoint, const char *soap_action, _ns1__GetQuote *ns1__GetQuote, _ns1__GetQuoteResponse *ns1__GetQuoteResponse)
{	struct __ns1__GetQuote_ soap_tmp___ns1__GetQuote_;
	if (!soap_endpoint)
		soap_endpoint = "http://ws.cdyne.com/delayedstockquote/delayedstockquote.asmx";
	if (!soap_action)
		soap_action = "http://ws.cdyne.com/GetQuote";
	soap->encodingStyle = NULL;
	soap_tmp___ns1__GetQuote_.ns1__GetQuote = ns1__GetQuote;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns1__GetQuote_(soap, &soap_tmp___ns1__GetQuote_);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__GetQuote_(soap, &soap_tmp___ns1__GetQuote_, "-ns1:GetQuote", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__GetQuote_(soap, &soap_tmp___ns1__GetQuote_, "-ns1:GetQuote", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns1__GetQuoteResponse)
		return soap_closesock(soap);
	ns1__GetQuoteResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__GetQuoteResponse->soap_get(soap, "ns1:GetQuoteResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__GetQuickQuote_(struct soap *soap, const char *soap_endpoint, const char *soap_action, _ns1__GetQuickQuote *ns1__GetQuickQuote, _ns1__GetQuickQuoteResponse *ns1__GetQuickQuoteResponse)
{	struct __ns1__GetQuickQuote_ soap_tmp___ns1__GetQuickQuote_;
	if (!soap_endpoint)
		soap_endpoint = "http://ws.cdyne.com/delayedstockquote/delayedstockquote.asmx";
	if (!soap_action)
		soap_action = "http://ws.cdyne.com/GetQuickQuote";
	soap->encodingStyle = NULL;
	soap_tmp___ns1__GetQuickQuote_.ns1__GetQuickQuote = ns1__GetQuickQuote;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns1__GetQuickQuote_(soap, &soap_tmp___ns1__GetQuickQuote_);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__GetQuickQuote_(soap, &soap_tmp___ns1__GetQuickQuote_, "-ns1:GetQuickQuote", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__GetQuickQuote_(soap, &soap_tmp___ns1__GetQuickQuote_, "-ns1:GetQuickQuote", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns1__GetQuickQuoteResponse)
		return soap_closesock(soap);
	ns1__GetQuickQuoteResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__GetQuickQuoteResponse->soap_get(soap, "ns1:GetQuickQuoteResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__GetQuoteDataSet_(struct soap *soap, const char *soap_endpoint, const char *soap_action, _ns1__GetQuoteDataSet *ns1__GetQuoteDataSet, _ns1__GetQuoteDataSetResponse *ns1__GetQuoteDataSetResponse)
{	struct __ns1__GetQuoteDataSet_ soap_tmp___ns1__GetQuoteDataSet_;
	if (!soap_endpoint)
		soap_endpoint = "http://ws.cdyne.com/delayedstockquote/delayedstockquote.asmx";
	if (!soap_action)
		soap_action = "http://ws.cdyne.com/GetQuoteDataSet";
	soap->encodingStyle = NULL;
	soap_tmp___ns1__GetQuoteDataSet_.ns1__GetQuoteDataSet = ns1__GetQuoteDataSet;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns1__GetQuoteDataSet_(soap, &soap_tmp___ns1__GetQuoteDataSet_);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__GetQuoteDataSet_(soap, &soap_tmp___ns1__GetQuoteDataSet_, "-ns1:GetQuoteDataSet", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__GetQuoteDataSet_(soap, &soap_tmp___ns1__GetQuoteDataSet_, "-ns1:GetQuoteDataSet", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns1__GetQuoteDataSetResponse)
		return soap_closesock(soap);
	ns1__GetQuoteDataSetResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__GetQuoteDataSetResponse->soap_get(soap, "ns1:GetQuoteDataSetResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

#if defined(__BORLANDC__)
#pragma option pop
#pragma option pop
#endif

/* End of soapClient.cpp */