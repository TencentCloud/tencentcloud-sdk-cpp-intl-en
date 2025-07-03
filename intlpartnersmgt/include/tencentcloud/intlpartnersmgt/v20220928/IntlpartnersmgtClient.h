/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_INTLPARTNERSMGTCLIENT_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_INTLPARTNERSMGTCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/AllocateCreditPoolRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/AllocateCreditPoolResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/AllocateCustomerCreditRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/AllocateCustomerCreditResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/ApproveClientApplyRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/ApproveClientApplyResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/ApproveSubAgentApplyRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/ApproveSubAgentApplyResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/CreateAccountRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/CreateAccountResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/CreateAndSendClientInvitationMailRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/CreateAndSendClientInvitationMailResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/DescribeBillDetailRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/DescribeBillDetailResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/DescribeBillDownloadUrlRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/DescribeBillDownloadUrlResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/DescribeBillSummaryRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/DescribeBillSummaryResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/DescribeBillSummaryByPayModeRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/DescribeBillSummaryByPayModeResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/DescribeBillSummaryByProductRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/DescribeBillSummaryByProductResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/DescribeBillSummaryByRegionRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/DescribeBillSummaryByRegionResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/DescribeCustomerBillDetailRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/DescribeCustomerBillDetailResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/DescribeCustomerBillDetailByDayRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/DescribeCustomerBillDetailByDayResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/DescribeCustomerBillDownloadUrlRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/DescribeCustomerBillDownloadUrlResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/DescribeCustomerBillSummaryRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/DescribeCustomerBillSummaryResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/DescribeCustomerInfoRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/DescribeCustomerInfoResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/DescribeCustomerUinRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/DescribeCustomerUinResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/DescribeRebateDownloadUrlRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/DescribeRebateDownloadUrlResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/ForceQNRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/ForceQNResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/GetCountryCodesRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/GetCountryCodesResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/GetTradeConfigListRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/GetTradeConfigListResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/ModifyClientRemarkRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/ModifyClientRemarkResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryAccountVerificationStatusRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryAccountVerificationStatusResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryCreditAllocationHistoryRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryCreditAllocationHistoryResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryCreditByUinListRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryCreditByUinListResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryCustomerBillingQuotaRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryCustomerBillingQuotaResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryCustomersCreditRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryCustomersCreditResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryDirectCustomersCreditRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryDirectCustomersCreditResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryInvitationInfoRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryInvitationInfoResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryPartnerCreditRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryPartnerCreditResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryPendingClientsV2Request.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryPendingClientsV2Response.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryPendingSubAgentsV2Request.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryPendingSubAgentsV2Response.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryPolicyProductListByCodeRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryPolicyProductListByCodeResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QuerySubAgentsDetailV2Request.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QuerySubAgentsDetailV2Response.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryT1IndirectCustomersDetailRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryT1IndirectCustomersDetailResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryVoucherAmountByUinRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryVoucherAmountByUinResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryVoucherListByUinRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryVoucherListByUinResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryVoucherPoolRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryVoucherPoolResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/SendVerifyCodeRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/SendVerifyCodeResponse.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            class IntlpartnersmgtClient : public AbstractClient
            {
            public:
                IntlpartnersmgtClient(const Credential &credential, const std::string &region);
                IntlpartnersmgtClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AllocateCreditPoolResponse> AllocateCreditPoolOutcome;
                typedef std::future<AllocateCreditPoolOutcome> AllocateCreditPoolOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::AllocateCreditPoolRequest&, AllocateCreditPoolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AllocateCreditPoolAsyncHandler;
                typedef Outcome<Core::Error, Model::AllocateCustomerCreditResponse> AllocateCustomerCreditOutcome;
                typedef std::future<AllocateCustomerCreditOutcome> AllocateCustomerCreditOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::AllocateCustomerCreditRequest&, AllocateCustomerCreditOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AllocateCustomerCreditAsyncHandler;
                typedef Outcome<Core::Error, Model::ApproveClientApplyResponse> ApproveClientApplyOutcome;
                typedef std::future<ApproveClientApplyOutcome> ApproveClientApplyOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::ApproveClientApplyRequest&, ApproveClientApplyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApproveClientApplyAsyncHandler;
                typedef Outcome<Core::Error, Model::ApproveSubAgentApplyResponse> ApproveSubAgentApplyOutcome;
                typedef std::future<ApproveSubAgentApplyOutcome> ApproveSubAgentApplyOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::ApproveSubAgentApplyRequest&, ApproveSubAgentApplyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApproveSubAgentApplyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAccountResponse> CreateAccountOutcome;
                typedef std::future<CreateAccountOutcome> CreateAccountOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::CreateAccountRequest&, CreateAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAndSendClientInvitationMailResponse> CreateAndSendClientInvitationMailOutcome;
                typedef std::future<CreateAndSendClientInvitationMailOutcome> CreateAndSendClientInvitationMailOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::CreateAndSendClientInvitationMailRequest&, CreateAndSendClientInvitationMailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAndSendClientInvitationMailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBillDetailResponse> DescribeBillDetailOutcome;
                typedef std::future<DescribeBillDetailOutcome> DescribeBillDetailOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::DescribeBillDetailRequest&, DescribeBillDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBillDownloadUrlResponse> DescribeBillDownloadUrlOutcome;
                typedef std::future<DescribeBillDownloadUrlOutcome> DescribeBillDownloadUrlOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::DescribeBillDownloadUrlRequest&, DescribeBillDownloadUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillDownloadUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBillSummaryResponse> DescribeBillSummaryOutcome;
                typedef std::future<DescribeBillSummaryOutcome> DescribeBillSummaryOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::DescribeBillSummaryRequest&, DescribeBillSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBillSummaryByPayModeResponse> DescribeBillSummaryByPayModeOutcome;
                typedef std::future<DescribeBillSummaryByPayModeOutcome> DescribeBillSummaryByPayModeOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::DescribeBillSummaryByPayModeRequest&, DescribeBillSummaryByPayModeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillSummaryByPayModeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBillSummaryByProductResponse> DescribeBillSummaryByProductOutcome;
                typedef std::future<DescribeBillSummaryByProductOutcome> DescribeBillSummaryByProductOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::DescribeBillSummaryByProductRequest&, DescribeBillSummaryByProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillSummaryByProductAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBillSummaryByRegionResponse> DescribeBillSummaryByRegionOutcome;
                typedef std::future<DescribeBillSummaryByRegionOutcome> DescribeBillSummaryByRegionOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::DescribeBillSummaryByRegionRequest&, DescribeBillSummaryByRegionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillSummaryByRegionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCustomerBillDetailResponse> DescribeCustomerBillDetailOutcome;
                typedef std::future<DescribeCustomerBillDetailOutcome> DescribeCustomerBillDetailOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::DescribeCustomerBillDetailRequest&, DescribeCustomerBillDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomerBillDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCustomerBillDetailByDayResponse> DescribeCustomerBillDetailByDayOutcome;
                typedef std::future<DescribeCustomerBillDetailByDayOutcome> DescribeCustomerBillDetailByDayOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::DescribeCustomerBillDetailByDayRequest&, DescribeCustomerBillDetailByDayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomerBillDetailByDayAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCustomerBillDownloadUrlResponse> DescribeCustomerBillDownloadUrlOutcome;
                typedef std::future<DescribeCustomerBillDownloadUrlOutcome> DescribeCustomerBillDownloadUrlOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::DescribeCustomerBillDownloadUrlRequest&, DescribeCustomerBillDownloadUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomerBillDownloadUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCustomerBillSummaryResponse> DescribeCustomerBillSummaryOutcome;
                typedef std::future<DescribeCustomerBillSummaryOutcome> DescribeCustomerBillSummaryOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::DescribeCustomerBillSummaryRequest&, DescribeCustomerBillSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomerBillSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCustomerInfoResponse> DescribeCustomerInfoOutcome;
                typedef std::future<DescribeCustomerInfoOutcome> DescribeCustomerInfoOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::DescribeCustomerInfoRequest&, DescribeCustomerInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomerInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCustomerUinResponse> DescribeCustomerUinOutcome;
                typedef std::future<DescribeCustomerUinOutcome> DescribeCustomerUinOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::DescribeCustomerUinRequest&, DescribeCustomerUinOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomerUinAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRebateDownloadUrlResponse> DescribeRebateDownloadUrlOutcome;
                typedef std::future<DescribeRebateDownloadUrlOutcome> DescribeRebateDownloadUrlOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::DescribeRebateDownloadUrlRequest&, DescribeRebateDownloadUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRebateDownloadUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::ForceQNResponse> ForceQNOutcome;
                typedef std::future<ForceQNOutcome> ForceQNOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::ForceQNRequest&, ForceQNOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ForceQNAsyncHandler;
                typedef Outcome<Core::Error, Model::GetCountryCodesResponse> GetCountryCodesOutcome;
                typedef std::future<GetCountryCodesOutcome> GetCountryCodesOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::GetCountryCodesRequest&, GetCountryCodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetCountryCodesAsyncHandler;
                typedef Outcome<Core::Error, Model::GetTradeConfigListResponse> GetTradeConfigListOutcome;
                typedef std::future<GetTradeConfigListOutcome> GetTradeConfigListOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::GetTradeConfigListRequest&, GetTradeConfigListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTradeConfigListAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyClientRemarkResponse> ModifyClientRemarkOutcome;
                typedef std::future<ModifyClientRemarkOutcome> ModifyClientRemarkOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::ModifyClientRemarkRequest&, ModifyClientRemarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClientRemarkAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryAccountVerificationStatusResponse> QueryAccountVerificationStatusOutcome;
                typedef std::future<QueryAccountVerificationStatusOutcome> QueryAccountVerificationStatusOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::QueryAccountVerificationStatusRequest&, QueryAccountVerificationStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryAccountVerificationStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryCreditAllocationHistoryResponse> QueryCreditAllocationHistoryOutcome;
                typedef std::future<QueryCreditAllocationHistoryOutcome> QueryCreditAllocationHistoryOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::QueryCreditAllocationHistoryRequest&, QueryCreditAllocationHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryCreditAllocationHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryCreditByUinListResponse> QueryCreditByUinListOutcome;
                typedef std::future<QueryCreditByUinListOutcome> QueryCreditByUinListOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::QueryCreditByUinListRequest&, QueryCreditByUinListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryCreditByUinListAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryCustomerBillingQuotaResponse> QueryCustomerBillingQuotaOutcome;
                typedef std::future<QueryCustomerBillingQuotaOutcome> QueryCustomerBillingQuotaOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::QueryCustomerBillingQuotaRequest&, QueryCustomerBillingQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryCustomerBillingQuotaAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryCustomersCreditResponse> QueryCustomersCreditOutcome;
                typedef std::future<QueryCustomersCreditOutcome> QueryCustomersCreditOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::QueryCustomersCreditRequest&, QueryCustomersCreditOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryCustomersCreditAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryDirectCustomersCreditResponse> QueryDirectCustomersCreditOutcome;
                typedef std::future<QueryDirectCustomersCreditOutcome> QueryDirectCustomersCreditOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::QueryDirectCustomersCreditRequest&, QueryDirectCustomersCreditOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryDirectCustomersCreditAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryInvitationInfoResponse> QueryInvitationInfoOutcome;
                typedef std::future<QueryInvitationInfoOutcome> QueryInvitationInfoOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::QueryInvitationInfoRequest&, QueryInvitationInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryInvitationInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryPartnerCreditResponse> QueryPartnerCreditOutcome;
                typedef std::future<QueryPartnerCreditOutcome> QueryPartnerCreditOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::QueryPartnerCreditRequest&, QueryPartnerCreditOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryPartnerCreditAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryPendingClientsV2Response> QueryPendingClientsV2Outcome;
                typedef std::future<QueryPendingClientsV2Outcome> QueryPendingClientsV2OutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::QueryPendingClientsV2Request&, QueryPendingClientsV2Outcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryPendingClientsV2AsyncHandler;
                typedef Outcome<Core::Error, Model::QueryPendingSubAgentsV2Response> QueryPendingSubAgentsV2Outcome;
                typedef std::future<QueryPendingSubAgentsV2Outcome> QueryPendingSubAgentsV2OutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::QueryPendingSubAgentsV2Request&, QueryPendingSubAgentsV2Outcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryPendingSubAgentsV2AsyncHandler;
                typedef Outcome<Core::Error, Model::QueryPolicyProductListByCodeResponse> QueryPolicyProductListByCodeOutcome;
                typedef std::future<QueryPolicyProductListByCodeOutcome> QueryPolicyProductListByCodeOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::QueryPolicyProductListByCodeRequest&, QueryPolicyProductListByCodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryPolicyProductListByCodeAsyncHandler;
                typedef Outcome<Core::Error, Model::QuerySubAgentsDetailV2Response> QuerySubAgentsDetailV2Outcome;
                typedef std::future<QuerySubAgentsDetailV2Outcome> QuerySubAgentsDetailV2OutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::QuerySubAgentsDetailV2Request&, QuerySubAgentsDetailV2Outcome, const std::shared_ptr<const AsyncCallerContext>&)> QuerySubAgentsDetailV2AsyncHandler;
                typedef Outcome<Core::Error, Model::QueryT1IndirectCustomersDetailResponse> QueryT1IndirectCustomersDetailOutcome;
                typedef std::future<QueryT1IndirectCustomersDetailOutcome> QueryT1IndirectCustomersDetailOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::QueryT1IndirectCustomersDetailRequest&, QueryT1IndirectCustomersDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryT1IndirectCustomersDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryVoucherAmountByUinResponse> QueryVoucherAmountByUinOutcome;
                typedef std::future<QueryVoucherAmountByUinOutcome> QueryVoucherAmountByUinOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::QueryVoucherAmountByUinRequest&, QueryVoucherAmountByUinOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryVoucherAmountByUinAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryVoucherListByUinResponse> QueryVoucherListByUinOutcome;
                typedef std::future<QueryVoucherListByUinOutcome> QueryVoucherListByUinOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::QueryVoucherListByUinRequest&, QueryVoucherListByUinOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryVoucherListByUinAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryVoucherPoolResponse> QueryVoucherPoolOutcome;
                typedef std::future<QueryVoucherPoolOutcome> QueryVoucherPoolOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::QueryVoucherPoolRequest&, QueryVoucherPoolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryVoucherPoolAsyncHandler;
                typedef Outcome<Core::Error, Model::SendVerifyCodeResponse> SendVerifyCodeOutcome;
                typedef std::future<SendVerifyCodeOutcome> SendVerifyCodeOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::SendVerifyCodeRequest&, SendVerifyCodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SendVerifyCodeAsyncHandler;



                /**
                 *This API is used to allocate credit pools to second-level resellers by distributors.
Callable roles: Distributor
                 * @param req AllocateCreditPoolRequest
                 * @return AllocateCreditPoolOutcome
                 */
                AllocateCreditPoolOutcome AllocateCreditPool(const Model::AllocateCreditPoolRequest &request);
                void AllocateCreditPoolAsync(const Model::AllocateCreditPoolRequest& request, const AllocateCreditPoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AllocateCreditPoolOutcomeCallable AllocateCreditPoolCallable(const Model::AllocateCreditPoolRequest& request);

                /**
                 *This API is used for a partner to set credit for a customer, such as increasing or lowering the credit and setting it to 0.
1. The credit is valid permanently and will not be zeroed regularly.
2. The customer's service will be suspended when its available credit is set to 0, so caution should be exercised with this operation.
3. To prevent the customer from making new purchases without affecting their use of previously purchased products, the partner can set their available credit to 0 after obtaining the non-stop feature privilege from the channel manager.
4. The set credit is an increment of the current available credit and cannot exceed the remaining allocable credit. Setting the credit to a negative value indicates that it will be repossessed. The available credit can be set to 0 at the minimum.

Callable roles: Distributor, Second-level reseller, Reseller
                 * @param req AllocateCustomerCreditRequest
                 * @return AllocateCustomerCreditOutcome
                 */
                AllocateCustomerCreditOutcome AllocateCustomerCredit(const Model::AllocateCustomerCreditRequest &request);
                void AllocateCustomerCreditAsync(const Model::AllocateCustomerCreditRequest& request, const AllocateCustomerCreditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AllocateCustomerCreditOutcomeCallable AllocateCustomerCreditCallable(const Model::AllocateCustomerCreditRequest& request);

                /**
                 *Description: This API is used by resellers to review applications to become sub-customers. Note: This API is used to apply for the allowlist. If needed, please contact your business representative.

Callable roles: Reseller, Distributer, Second-level reseller
                 * @param req ApproveClientApplyRequest
                 * @return ApproveClientApplyOutcome
                 */
                ApproveClientApplyOutcome ApproveClientApply(const Model::ApproveClientApplyRequest &request);
                void ApproveClientApplyAsync(const Model::ApproveClientApplyRequest& request, const ApproveClientApplyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApproveClientApplyOutcomeCallable ApproveClientApplyCallable(const Model::ApproveClientApplyRequest& request);

                /**
                 *This API is used to approve applications for second-level resellers.
Invocation Role: Distributor.
                 * @param req ApproveSubAgentApplyRequest
                 * @return ApproveSubAgentApplyOutcome
                 */
                ApproveSubAgentApplyOutcome ApproveSubAgentApply(const Model::ApproveSubAgentApplyRequest &request);
                void ApproveSubAgentApplyAsync(const Model::ApproveSubAgentApplyRequest& request, const ApproveSubAgentApplyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApproveSubAgentApplyOutcomeCallable ApproveSubAgentApplyCallable(const Model::ApproveSubAgentApplyRequest& request);

                /**
                 *This API is used to create Tencent Cloud customer accounts for distributor/second-level resellers.After the account is created, it will be automatically bound to the partner account.Note:
1. Create a Tencent Cloud account. The entered email address and mobile phone number need to be verified by the partner for validity.
2. Customers need to add personal information when logging in for the first time.
3. This interface needs to be applied for allowlist usage. Please contact the channel manager to initiate the application process.

Callable roles: Distributor, Second-level reseller, Reseller
                 * @param req CreateAccountRequest
                 * @return CreateAccountOutcome
                 */
                CreateAccountOutcome CreateAccount(const Model::CreateAccountRequest &request);
                void CreateAccountAsync(const Model::CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAccountOutcomeCallable CreateAccountCallable(const Model::CreateAccountRequest& request);

                /**
                 *This API is used to perform operations. Application for allowlist is required before usage. If needed, contact your business representative to request allowlisting. The specific usage process is as follows;.
This API is used to create an invitation link. You can send the invitation link to your designated email address.
2. Customers need to click the invitation link in the mailbox, fill in and submit relevant information.
3. After customer submission, you can view the application of this sub-customer on the customer management page and review it.

This API is used to handle cases where if the designated mailbox does not receive the invitation link, you can send the invitation link returned by the API to the customer manually.
Invocation roles: resellers, distributors, second-level reseller.
                 * @param req CreateAndSendClientInvitationMailRequest
                 * @return CreateAndSendClientInvitationMailOutcome
                 */
                CreateAndSendClientInvitationMailOutcome CreateAndSendClientInvitationMail(const Model::CreateAndSendClientInvitationMailRequest &request);
                void CreateAndSendClientInvitationMailAsync(const Model::CreateAndSendClientInvitationMailRequest& request, const CreateAndSendClientInvitationMailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAndSendClientInvitationMailOutcomeCallable CreateAndSendClientInvitationMailCallable(const Model::CreateAndSendClientInvitationMailRequest& request);

                /**
                 *Description: End-customer queries its own bill details.
Callable role: End-customer.
                 * @param req DescribeBillDetailRequest
                 * @return DescribeBillDetailOutcome
                 */
                DescribeBillDetailOutcome DescribeBillDetail(const Model::DescribeBillDetailRequest &request);
                void DescribeBillDetailAsync(const Model::DescribeBillDetailRequest& request, const DescribeBillDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillDetailOutcomeCallable DescribeBillDetailCallable(const Model::DescribeBillDetailRequest& request);

                /**
                 *Description: This API is used to download billing files and return billing file URLs for sub-customers.
Callable role: Enb-customer.
                 * @param req DescribeBillDownloadUrlRequest
                 * @return DescribeBillDownloadUrlOutcome
                 */
                DescribeBillDownloadUrlOutcome DescribeBillDownloadUrl(const Model::DescribeBillDownloadUrlRequest &request);
                void DescribeBillDownloadUrlAsync(const Model::DescribeBillDownloadUrlRequest& request, const DescribeBillDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillDownloadUrlOutcomeCallable DescribeBillDownloadUrlCallable(const Model::DescribeBillDownloadUrlRequest& request);

                /**
                 *Description: External API for L1 billing of Sub-customer billing center.
Callable role: End-customer.
                 * @param req DescribeBillSummaryRequest
                 * @return DescribeBillSummaryOutcome
                 */
                DescribeBillSummaryOutcome DescribeBillSummary(const Model::DescribeBillSummaryRequest &request);
                void DescribeBillSummaryAsync(const Model::DescribeBillSummaryRequest& request, const DescribeBillSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillSummaryOutcomeCallable DescribeBillSummaryCallable(const Model::DescribeBillSummaryRequest& request);

                /**
                 *This API is used to obtain the total amount of customer bills by payment mode.
Callable roles: Distributor, Second-level reseller, Reseller
                 * @param req DescribeBillSummaryByPayModeRequest
                 * @return DescribeBillSummaryByPayModeOutcome
                 */
                DescribeBillSummaryByPayModeOutcome DescribeBillSummaryByPayMode(const Model::DescribeBillSummaryByPayModeRequest &request);
                void DescribeBillSummaryByPayModeAsync(const Model::DescribeBillSummaryByPayModeRequest& request, const DescribeBillSummaryByPayModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillSummaryByPayModeOutcomeCallable DescribeBillSummaryByPayModeCallable(const Model::DescribeBillSummaryByPayModeRequest& request);

                /**
                 *Description: Obtain the summarized value of sub - account bills by product dimension.
Callable roles: Distributor, Second-level reseller, Reseller
                 * @param req DescribeBillSummaryByProductRequest
                 * @return DescribeBillSummaryByProductOutcome
                 */
                DescribeBillSummaryByProductOutcome DescribeBillSummaryByProduct(const Model::DescribeBillSummaryByProductRequest &request);
                void DescribeBillSummaryByProductAsync(const Model::DescribeBillSummaryByProductRequest& request, const DescribeBillSummaryByProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillSummaryByProductOutcomeCallable DescribeBillSummaryByProductCallable(const Model::DescribeBillSummaryByProductRequest& request);

                /**
                 *Description: Obtain the summarized value of sub - account bills by region through API.
Callable roles: Distributor, Second-level reseller, Reseller
                 * @param req DescribeBillSummaryByRegionRequest
                 * @return DescribeBillSummaryByRegionOutcome
                 */
                DescribeBillSummaryByRegionOutcome DescribeBillSummaryByRegion(const Model::DescribeBillSummaryByRegionRequest &request);
                void DescribeBillSummaryByRegionAsync(const Model::DescribeBillSummaryByRegionRequest& request, const DescribeBillSummaryByRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillSummaryByRegionOutcomeCallable DescribeBillSummaryByRegionCallable(const Model::DescribeBillSummaryByRegionRequest& request);

                /**
                 *This API is used to query the customer bill details by resellers.
Callable roles: Distributor, Second-level reseller, Reseller.
                 * @param req DescribeCustomerBillDetailRequest
                 * @return DescribeCustomerBillDetailOutcome
                 */
                DescribeCustomerBillDetailOutcome DescribeCustomerBillDetail(const Model::DescribeCustomerBillDetailRequest &request);
                void DescribeCustomerBillDetailAsync(const Model::DescribeCustomerBillDetailRequest& request, const DescribeCustomerBillDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCustomerBillDetailOutcomeCallable DescribeCustomerBillDetailCallable(const Model::DescribeCustomerBillDetailRequest& request);

                /**
                 *This API is used to query the daily bill expenditure of customer by resellers.
Invocation Role: first-level reseller, second-level reseller, reseller.
                 * @param req DescribeCustomerBillDetailByDayRequest
                 * @return DescribeCustomerBillDetailByDayOutcome
                 */
                DescribeCustomerBillDetailByDayOutcome DescribeCustomerBillDetailByDay(const Model::DescribeCustomerBillDetailByDayRequest &request);
                void DescribeCustomerBillDetailByDayAsync(const Model::DescribeCustomerBillDetailByDayRequest& request, const DescribeCustomerBillDetailByDayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCustomerBillDetailByDayOutcomeCallable DescribeCustomerBillDetailByDayCallable(const Model::DescribeCustomerBillDetailByDayRequest& request);

                /**
                 *This API is used to get the URL for downloading the customer bill file by reseller. The download conditions are as follows:
1. Detailed bills (billDetail and billDetailPack) can be downloaded starting from June 2022; resource bills (billResource and billResourcePack) can be downloaded starting from November 2023.
2. Bill packages (billDetailPack and billResourcePack) can only be downloaded after billing.
                 * @param req DescribeCustomerBillDownloadUrlRequest
                 * @return DescribeCustomerBillDownloadUrlOutcome
                 */
                DescribeCustomerBillDownloadUrlOutcome DescribeCustomerBillDownloadUrl(const Model::DescribeCustomerBillDownloadUrlRequest &request);
                void DescribeCustomerBillDownloadUrlAsync(const Model::DescribeCustomerBillDownloadUrlRequest& request, const DescribeCustomerBillDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCustomerBillDownloadUrlOutcomeCallable DescribeCustomerBillDownloadUrlCallable(const Model::DescribeCustomerBillDownloadUrlRequest& request);

                /**
                 *This API is used to query the total amount of customer bills.
Callable roles: Distributor, Second-level reseller, Reseller
                 * @param req DescribeCustomerBillSummaryRequest
                 * @return DescribeCustomerBillSummaryOutcome
                 */
                DescribeCustomerBillSummaryOutcome DescribeCustomerBillSummary(const Model::DescribeCustomerBillSummaryRequest &request);
                void DescribeCustomerBillSummaryAsync(const Model::DescribeCustomerBillSummaryRequest& request, const DescribeCustomerBillSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCustomerBillSummaryOutcomeCallable DescribeCustomerBillSummaryCallable(const Model::DescribeCustomerBillSummaryRequest& request);

                /**
                 *This API is used to query sub-customer information.
Invocation roles: reseller, first-level distributor.
                 * @param req DescribeCustomerInfoRequest
                 * @return DescribeCustomerInfoOutcome
                 */
                DescribeCustomerInfoOutcome DescribeCustomerInfo(const Model::DescribeCustomerInfoRequest &request);
                void DescribeCustomerInfoAsync(const Model::DescribeCustomerInfoRequest& request, const DescribeCustomerInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCustomerInfoOutcomeCallable DescribeCustomerInfoCallable(const Model::DescribeCustomerInfoRequest& request);

                /**
                 *This API is used to query the list of customer UINs.
                 * @param req DescribeCustomerUinRequest
                 * @return DescribeCustomerUinOutcome
                 */
                DescribeCustomerUinOutcome DescribeCustomerUin(const Model::DescribeCustomerUinRequest &request);
                void DescribeCustomerUinAsync(const Model::DescribeCustomerUinRequest& request, const DescribeCustomerUinAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCustomerUinOutcomeCallable DescribeCustomerUinCallable(const Model::DescribeCustomerUinRequest& request);

                /**
                 *This API is used to download the commission bill file by resellers/agents. The file URL is returned.
Resellers/Agents can call this API.
                 * @param req DescribeRebateDownloadUrlRequest
                 * @return DescribeRebateDownloadUrlOutcome
                 */
                DescribeRebateDownloadUrlOutcome DescribeRebateDownloadUrl(const Model::DescribeRebateDownloadUrlRequest &request);
                void DescribeRebateDownloadUrlAsync(const Model::DescribeRebateDownloadUrlRequest& request, const DescribeRebateDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRebateDownloadUrlOutcomeCallable DescribeRebateDownloadUrlCallable(const Model::DescribeRebateDownloadUrlRequest& request);

                /**
                 *Forced Service Suspension settings and cancellation can be used only after the reseller is whitelisted.

Callable roles: Distributor, Second-level reseller, Reseller
                 * @param req ForceQNRequest
                 * @return ForceQNOutcome
                 */
                ForceQNOutcome ForceQN(const Model::ForceQNRequest &request);
                void ForceQNAsync(const Model::ForceQNRequest& request, const ForceQNAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ForceQNOutcomeCallable ForceQNCallable(const Model::ForceQNRequest& request);

                /**
                 *This API is used to obtain country/region codes.
                 * @param req GetCountryCodesRequest
                 * @return GetCountryCodesOutcome
                 */
                GetCountryCodesOutcome GetCountryCodes(const Model::GetCountryCodesRequest &request);
                void GetCountryCodesAsync(const Model::GetCountryCodesRequest& request, const GetCountryCodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetCountryCodesOutcomeCallable GetCountryCodesCallable(const Model::GetCountryCodesRequest& request);

                /**
                 *This API is used to query industry information, including layer-1 industry and layer-2 industry.

Callable roles: Distributor, Second-level reseller, Reseller,End-customer
                 * @param req GetTradeConfigListRequest
                 * @return GetTradeConfigListOutcome
                 */
                GetTradeConfigListOutcome GetTradeConfigList(const Model::GetTradeConfigListRequest &request);
                void GetTradeConfigListAsync(const Model::GetTradeConfigListRequest& request, const GetTradeConfigListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetTradeConfigListOutcomeCallable GetTradeConfigListCallable(const Model::GetTradeConfigListRequest& request);

                /**
                 *This API is used to modify customer remarks.

Callable roles: Distributor, Second-level reseller, Reseller
                 * @param req ModifyClientRemarkRequest
                 * @return ModifyClientRemarkOutcome
                 */
                ModifyClientRemarkOutcome ModifyClientRemark(const Model::ModifyClientRemarkRequest &request);
                void ModifyClientRemarkAsync(const Model::ModifyClientRemarkRequest& request, const ModifyClientRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyClientRemarkOutcomeCallable ModifyClientRemarkCallable(const Model::ModifyClientRemarkRequest& request);

                /**
                 *This API is used to query the account verification status.
Callable roles: Distributor, Reseller
                 * @param req QueryAccountVerificationStatusRequest
                 * @return QueryAccountVerificationStatusOutcome
                 */
                QueryAccountVerificationStatusOutcome QueryAccountVerificationStatus(const Model::QueryAccountVerificationStatusRequest &request);
                void QueryAccountVerificationStatusAsync(const Model::QueryAccountVerificationStatusRequest& request, const QueryAccountVerificationStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryAccountVerificationStatusOutcomeCallable QueryAccountVerificationStatusCallable(const Model::QueryAccountVerificationStatusRequest& request);

                /**
                 *This API is used to query all the credit allocation records of a single customer.
Callable roles: Distributor, Second-level reseller, Reseller
                 * @param req QueryCreditAllocationHistoryRequest
                 * @return QueryCreditAllocationHistoryOutcome
                 */
                QueryCreditAllocationHistoryOutcome QueryCreditAllocationHistory(const Model::QueryCreditAllocationHistoryRequest &request);
                void QueryCreditAllocationHistoryAsync(const Model::QueryCreditAllocationHistoryRequest& request, const QueryCreditAllocationHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryCreditAllocationHistoryOutcomeCallable QueryCreditAllocationHistoryCallable(const Model::QueryCreditAllocationHistoryRequest& request);

                /**
                 *This API is used to query the credit of users in the list.
Callable roles: Distributor, Second-level reseller, Reseller
                 * @param req QueryCreditByUinListRequest
                 * @return QueryCreditByUinListOutcome
                 */
                QueryCreditByUinListOutcome QueryCreditByUinList(const Model::QueryCreditByUinListRequest &request);
                void QueryCreditByUinListAsync(const Model::QueryCreditByUinListRequest& request, const QueryCreditByUinListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryCreditByUinListOutcomeCallable QueryCreditByUinListCallable(const Model::QueryCreditByUinListRequest& request);

                /**
                 *Description: This API is used for a sub-customer to real-time query its own total credit and remaining credit in USD.

Callable roles: Sub-customer
                 * @param req QueryCustomerBillingQuotaRequest
                 * @return QueryCustomerBillingQuotaOutcome
                 */
                QueryCustomerBillingQuotaOutcome QueryCustomerBillingQuota(const Model::QueryCustomerBillingQuotaRequest &request);
                void QueryCustomerBillingQuotaAsync(const Model::QueryCustomerBillingQuotaRequest& request, const QueryCustomerBillingQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryCustomerBillingQuotaOutcomeCallable QueryCustomerBillingQuotaCallable(const Model::QueryCustomerBillingQuotaRequest& request);

                /**
                 *This API is used for a partner to the credits and basic information of cutomers.

Callable roles: Distributor, Second-level reseller, Reseller
                 * @param req QueryCustomersCreditRequest
                 * @return QueryCustomersCreditOutcome
                 */
                QueryCustomersCreditOutcome QueryCustomersCredit(const Model::QueryCustomersCreditRequest &request);
                void QueryCustomersCreditAsync(const Model::QueryCustomersCreditRequest& request, const QueryCustomersCreditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryCustomersCreditOutcomeCallable QueryCustomersCreditCallable(const Model::QueryCustomersCreditRequest& request);

                /**
                 *This API is used to query the credits of direct customers.
Callable roles: Distributor, Second-level reseller, Reseller
                 * @param req QueryDirectCustomersCreditRequest
                 * @return QueryDirectCustomersCreditOutcome
                 */
                QueryDirectCustomersCreditOutcome QueryDirectCustomersCredit(const Model::QueryDirectCustomersCreditRequest &request);
                void QueryDirectCustomersCreditAsync(const Model::QueryDirectCustomersCreditRequest& request, const QueryDirectCustomersCreditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryDirectCustomersCreditOutcomeCallable QueryDirectCustomersCreditCallable(const Model::QueryDirectCustomersCreditRequest& request);

                /**
                 *Query usage information of invitation link. Once created, the data will only be retained for 60 days, and the system will automatically delete the invitation link after 60 days.
Invokable role types: Distributor, Second-level reseller, Reseller.
                 * @param req QueryInvitationInfoRequest
                 * @return QueryInvitationInfoOutcome
                 */
                QueryInvitationInfoOutcome QueryInvitationInfo(const Model::QueryInvitationInfoRequest &request);
                void QueryInvitationInfoAsync(const Model::QueryInvitationInfoRequest& request, const QueryInvitationInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryInvitationInfoOutcomeCallable QueryInvitationInfoCallable(const Model::QueryInvitationInfoRequest& request);

                /**
                 *This API is used for a partner to query its own total credit, available credit, and used credit in USD.

Callable roles: Distributor, Second-level reseller, Reseller
                 * @param req QueryPartnerCreditRequest
                 * @return QueryPartnerCreditOutcome
                 */
                QueryPartnerCreditOutcome QueryPartnerCredit(const Model::QueryPartnerCreditRequest &request);
                void QueryPartnerCreditAsync(const Model::QueryPartnerCreditRequest& request, const QueryPartnerCreditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryPartnerCreditOutcomeCallable QueryPartnerCreditCallable(const Model::QueryPartnerCreditRequest& request);

                /**
                 *Description: This API is used by resellers to query the list of sub-customers pending review. Note: This API is used to apply for the allowlist. If needed, please contact your business representative.

Callable roles: Reseller, Distributer, Second-level reseller
                 * @param req QueryPendingClientsV2Request
                 * @return QueryPendingClientsV2Outcome
                 */
                QueryPendingClientsV2Outcome QueryPendingClientsV2(const Model::QueryPendingClientsV2Request &request);
                void QueryPendingClientsV2Async(const Model::QueryPendingClientsV2Request& request, const QueryPendingClientsV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryPendingClientsV2OutcomeCallable QueryPendingClientsV2Callable(const Model::QueryPendingClientsV2Request& request);

                /**
                 *This API is used to query information of second-level resellers in application.
Invocation Role: Distributor.
                 * @param req QueryPendingSubAgentsV2Request
                 * @return QueryPendingSubAgentsV2Outcome
                 */
                QueryPendingSubAgentsV2Outcome QueryPendingSubAgentsV2(const Model::QueryPendingSubAgentsV2Request &request);
                void QueryPendingSubAgentsV2Async(const Model::QueryPendingSubAgentsV2Request& request, const QueryPendingSubAgentsV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryPendingSubAgentsV2OutcomeCallable QueryPendingSubAgentsV2Callable(const Model::QueryPendingSubAgentsV2Request& request);

                /**
                 *This API is used to query the product list information within the specified policy range. To call this API, contact your business manager to apply for adding it to the allowlist.
Callable roles: Distributor, Second-level reseller, Reseller
                 * @param req QueryPolicyProductListByCodeRequest
                 * @return QueryPolicyProductListByCodeOutcome
                 */
                QueryPolicyProductListByCodeOutcome QueryPolicyProductListByCode(const Model::QueryPolicyProductListByCodeRequest &request);
                void QueryPolicyProductListByCodeAsync(const Model::QueryPolicyProductListByCodeRequest& request, const QueryPolicyProductListByCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryPolicyProductListByCodeOutcomeCallable QueryPolicyProductListByCodeCallable(const Model::QueryPolicyProductListByCodeRequest& request);

                /**
                 *This API is used to query information of second-level resellers.
Invocation Role:Distributor.
                 * @param req QuerySubAgentsDetailV2Request
                 * @return QuerySubAgentsDetailV2Outcome
                 */
                QuerySubAgentsDetailV2Outcome QuerySubAgentsDetailV2(const Model::QuerySubAgentsDetailV2Request &request);
                void QuerySubAgentsDetailV2Async(const Model::QuerySubAgentsDetailV2Request& request, const QuerySubAgentsDetailV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QuerySubAgentsDetailV2OutcomeCallable QuerySubAgentsDetailV2Callable(const Model::QuerySubAgentsDetailV2Request& request);

                /**
                 *This API is used to query the indirect sub-customers of a distributor.
Invokable role type: Distributor
                 * @param req QueryT1IndirectCustomersDetailRequest
                 * @return QueryT1IndirectCustomersDetailOutcome
                 */
                QueryT1IndirectCustomersDetailOutcome QueryT1IndirectCustomersDetail(const Model::QueryT1IndirectCustomersDetailRequest &request);
                void QueryT1IndirectCustomersDetailAsync(const Model::QueryT1IndirectCustomersDetailRequest& request, const QueryT1IndirectCustomersDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryT1IndirectCustomersDetailOutcomeCallable QueryT1IndirectCustomersDetailCallable(const Model::QueryT1IndirectCustomersDetailRequest& request);

                /**
                 *This API is used by primary/secondary resellers to query the voucher quota based on the customer UIN.
Callable roles: Reseller, Distributor, Second-level reseller
                 * @param req QueryVoucherAmountByUinRequest
                 * @return QueryVoucherAmountByUinOutcome
                 */
                QueryVoucherAmountByUinOutcome QueryVoucherAmountByUin(const Model::QueryVoucherAmountByUinRequest &request);
                void QueryVoucherAmountByUinAsync(const Model::QueryVoucherAmountByUinRequest& request, const QueryVoucherAmountByUinAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryVoucherAmountByUinOutcomeCallable QueryVoucherAmountByUinCallable(const Model::QueryVoucherAmountByUinRequest& request);

                /**
                 *This API is used by primary/secondary resellers to query the voucher list based on the customer UIN.
Callable roles: Reseller, Distributor, Second-level reseller
                 * @param req QueryVoucherListByUinRequest
                 * @return QueryVoucherListByUinOutcome
                 */
                QueryVoucherListByUinOutcome QueryVoucherListByUin(const Model::QueryVoucherListByUinRequest &request);
                void QueryVoucherListByUinAsync(const Model::QueryVoucherListByUinRequest& request, const QueryVoucherListByUinAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryVoucherListByUinOutcomeCallable QueryVoucherListByUinCallable(const Model::QueryVoucherListByUinRequest& request);

                /**
                 *This API is used by primary/secondary resellers to query the voucher quota pool.
Callable roles: Distributor, First-level reseller, Second-level reseller
                 * @param req QueryVoucherPoolRequest
                 * @return QueryVoucherPoolOutcome
                 */
                QueryVoucherPoolOutcome QueryVoucherPool(const Model::QueryVoucherPoolRequest &request);
                void QueryVoucherPoolAsync(const Model::QueryVoucherPoolRequest& request, const QueryVoucherPoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryVoucherPoolOutcomeCallable QueryVoucherPoolCallable(const Model::QueryVoucherPoolRequest& request);

                /**
                 *This API is used to send a verification code for account registration.

Callable roles: Distributor, Second-level reseller, Reseller,End-customer
                 * @param req SendVerifyCodeRequest
                 * @return SendVerifyCodeOutcome
                 */
                SendVerifyCodeOutcome SendVerifyCode(const Model::SendVerifyCodeRequest &request);
                void SendVerifyCodeAsync(const Model::SendVerifyCodeRequest& request, const SendVerifyCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SendVerifyCodeOutcomeCallable SendVerifyCodeCallable(const Model::SendVerifyCodeRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_INTLPARTNERSMGTCLIENT_H_
