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
#include <tencentcloud/intlpartnersmgt/v20220928/model/AllocateCustomerCreditRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/AllocateCustomerCreditResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/CreateAccountRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/CreateAccountResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/DescribeBillSummaryByPayModeRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/DescribeBillSummaryByPayModeResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/DescribeBillSummaryByProductRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/DescribeBillSummaryByProductResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/DescribeBillSummaryByRegionRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/DescribeBillSummaryByRegionResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/DescribeCustomerBillDetailRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/DescribeCustomerBillDetailResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/DescribeCustomerBillSummaryRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/DescribeCustomerBillSummaryResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/DescribeCustomerInfoRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/DescribeCustomerInfoResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/DescribeCustomerUinRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/DescribeCustomerUinResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/GetCountryCodesRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/GetCountryCodesResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryAccountVerificationStatusRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryAccountVerificationStatusResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryCreditAllocationHistoryRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryCreditAllocationHistoryResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryCreditByUinListRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryCreditByUinListResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryCreditQuotaRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryCreditQuotaResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryCustomersCreditRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryCustomersCreditResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryDirectCustomersCreditRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryDirectCustomersCreditResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryPartnerCreditRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryPartnerCreditResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryVoucherAmountByUinRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryVoucherAmountByUinResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryVoucherListByUinRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryVoucherListByUinResponse.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryVoucherPoolRequest.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryVoucherPoolResponse.h>


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

                typedef Outcome<Core::Error, Model::AllocateCustomerCreditResponse> AllocateCustomerCreditOutcome;
                typedef std::future<AllocateCustomerCreditOutcome> AllocateCustomerCreditOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::AllocateCustomerCreditRequest&, AllocateCustomerCreditOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AllocateCustomerCreditAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAccountResponse> CreateAccountOutcome;
                typedef std::future<CreateAccountOutcome> CreateAccountOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::CreateAccountRequest&, CreateAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccountAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeCustomerBillSummaryResponse> DescribeCustomerBillSummaryOutcome;
                typedef std::future<DescribeCustomerBillSummaryOutcome> DescribeCustomerBillSummaryOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::DescribeCustomerBillSummaryRequest&, DescribeCustomerBillSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomerBillSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCustomerInfoResponse> DescribeCustomerInfoOutcome;
                typedef std::future<DescribeCustomerInfoOutcome> DescribeCustomerInfoOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::DescribeCustomerInfoRequest&, DescribeCustomerInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomerInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCustomerUinResponse> DescribeCustomerUinOutcome;
                typedef std::future<DescribeCustomerUinOutcome> DescribeCustomerUinOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::DescribeCustomerUinRequest&, DescribeCustomerUinOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomerUinAsyncHandler;
                typedef Outcome<Core::Error, Model::GetCountryCodesResponse> GetCountryCodesOutcome;
                typedef std::future<GetCountryCodesOutcome> GetCountryCodesOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::GetCountryCodesRequest&, GetCountryCodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetCountryCodesAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryAccountVerificationStatusResponse> QueryAccountVerificationStatusOutcome;
                typedef std::future<QueryAccountVerificationStatusOutcome> QueryAccountVerificationStatusOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::QueryAccountVerificationStatusRequest&, QueryAccountVerificationStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryAccountVerificationStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryCreditAllocationHistoryResponse> QueryCreditAllocationHistoryOutcome;
                typedef std::future<QueryCreditAllocationHistoryOutcome> QueryCreditAllocationHistoryOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::QueryCreditAllocationHistoryRequest&, QueryCreditAllocationHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryCreditAllocationHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryCreditByUinListResponse> QueryCreditByUinListOutcome;
                typedef std::future<QueryCreditByUinListOutcome> QueryCreditByUinListOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::QueryCreditByUinListRequest&, QueryCreditByUinListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryCreditByUinListAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryCreditQuotaResponse> QueryCreditQuotaOutcome;
                typedef std::future<QueryCreditQuotaOutcome> QueryCreditQuotaOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::QueryCreditQuotaRequest&, QueryCreditQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryCreditQuotaAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryCustomersCreditResponse> QueryCustomersCreditOutcome;
                typedef std::future<QueryCustomersCreditOutcome> QueryCustomersCreditOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::QueryCustomersCreditRequest&, QueryCustomersCreditOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryCustomersCreditAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryDirectCustomersCreditResponse> QueryDirectCustomersCreditOutcome;
                typedef std::future<QueryDirectCustomersCreditOutcome> QueryDirectCustomersCreditOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::QueryDirectCustomersCreditRequest&, QueryDirectCustomersCreditOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryDirectCustomersCreditAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryPartnerCreditResponse> QueryPartnerCreditOutcome;
                typedef std::future<QueryPartnerCreditOutcome> QueryPartnerCreditOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::QueryPartnerCreditRequest&, QueryPartnerCreditOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryPartnerCreditAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryVoucherAmountByUinResponse> QueryVoucherAmountByUinOutcome;
                typedef std::future<QueryVoucherAmountByUinOutcome> QueryVoucherAmountByUinOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::QueryVoucherAmountByUinRequest&, QueryVoucherAmountByUinOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryVoucherAmountByUinAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryVoucherListByUinResponse> QueryVoucherListByUinOutcome;
                typedef std::future<QueryVoucherListByUinOutcome> QueryVoucherListByUinOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::QueryVoucherListByUinRequest&, QueryVoucherListByUinOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryVoucherListByUinAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryVoucherPoolResponse> QueryVoucherPoolOutcome;
                typedef std::future<QueryVoucherPoolOutcome> QueryVoucherPoolOutcomeCallable;
                typedef std::function<void(const IntlpartnersmgtClient*, const Model::QueryVoucherPoolRequest&, QueryVoucherPoolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryVoucherPoolAsyncHandler;



                /**
                 *This API is used for a partner to set credit for a customer, such as increasing or lowering the credit and setting it to 0.
1. The credit is valid permanently and will not be zeroed regularly.
2. The customer's service will be suspended when its available credit is set to 0, so caution should be exercised with this operation.
3. To prevent the customer from making new purchases without affecting their use of previously purchased products, the partner can set their available credit to 0 after obtaining the non-stop feature privilege from the channel manager.
4. The set credit is an increment of the current available credit and cannot exceed the remaining allocable credit. Setting the credit to a negative value indicates that it will be repossessed. The available credit can be set to 0 at the minimum.
                 * @param req AllocateCustomerCreditRequest
                 * @return AllocateCustomerCreditOutcome
                 */
                AllocateCustomerCreditOutcome AllocateCustomerCredit(const Model::AllocateCustomerCreditRequest &request);
                void AllocateCustomerCreditAsync(const Model::AllocateCustomerCreditRequest& request, const AllocateCustomerCreditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AllocateCustomerCreditOutcomeCallable AllocateCustomerCreditCallable(const Model::AllocateCustomerCreditRequest& request);

                /**
                 *This API is used to create a Tencent Cloud account on the partner platform for a customer. After registration, the customer will be automatically bound to the partner account.

Notes:<br>
1. The partner should verify the entered email address and mobile number for creating a Tencent Cloud account.<br>
2. The customer needs to complete personal information after the first login.
                 * @param req CreateAccountRequest
                 * @return CreateAccountOutcome
                 */
                CreateAccountOutcome CreateAccount(const Model::CreateAccountRequest &request);
                void CreateAccountAsync(const Model::CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAccountOutcomeCallable CreateAccountCallable(const Model::CreateAccountRequest& request);

                /**
                 *This API is used to obtain the total amount of customer bills by payment mode.
                 * @param req DescribeBillSummaryByPayModeRequest
                 * @return DescribeBillSummaryByPayModeOutcome
                 */
                DescribeBillSummaryByPayModeOutcome DescribeBillSummaryByPayMode(const Model::DescribeBillSummaryByPayModeRequest &request);
                void DescribeBillSummaryByPayModeAsync(const Model::DescribeBillSummaryByPayModeRequest& request, const DescribeBillSummaryByPayModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillSummaryByPayModeOutcomeCallable DescribeBillSummaryByPayModeCallable(const Model::DescribeBillSummaryByPayModeRequest& request);

                /**
                 *This API is used to obtain the total amount of customer bills by product.
                 * @param req DescribeBillSummaryByProductRequest
                 * @return DescribeBillSummaryByProductOutcome
                 */
                DescribeBillSummaryByProductOutcome DescribeBillSummaryByProduct(const Model::DescribeBillSummaryByProductRequest &request);
                void DescribeBillSummaryByProductAsync(const Model::DescribeBillSummaryByProductRequest& request, const DescribeBillSummaryByProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillSummaryByProductOutcomeCallable DescribeBillSummaryByProductCallable(const Model::DescribeBillSummaryByProductRequest& request);

                /**
                 *This API is used to obtain the total amount of customer bills by region.
                 * @param req DescribeBillSummaryByRegionRequest
                 * @return DescribeBillSummaryByRegionOutcome
                 */
                DescribeBillSummaryByRegionOutcome DescribeBillSummaryByRegion(const Model::DescribeBillSummaryByRegionRequest &request);
                void DescribeBillSummaryByRegionAsync(const Model::DescribeBillSummaryByRegionRequest& request, const DescribeBillSummaryByRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillSummaryByRegionOutcomeCallable DescribeBillSummaryByRegionCallable(const Model::DescribeBillSummaryByRegionRequest& request);

                /**
                 *This API is used to query the customer bill details.
                 * @param req DescribeCustomerBillDetailRequest
                 * @return DescribeCustomerBillDetailOutcome
                 */
                DescribeCustomerBillDetailOutcome DescribeCustomerBillDetail(const Model::DescribeCustomerBillDetailRequest &request);
                void DescribeCustomerBillDetailAsync(const Model::DescribeCustomerBillDetailRequest& request, const DescribeCustomerBillDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCustomerBillDetailOutcomeCallable DescribeCustomerBillDetailCallable(const Model::DescribeCustomerBillDetailRequest& request);

                /**
                 *This API is used to query the total amount of customer bills.
                 * @param req DescribeCustomerBillSummaryRequest
                 * @return DescribeCustomerBillSummaryOutcome
                 */
                DescribeCustomerBillSummaryOutcome DescribeCustomerBillSummary(const Model::DescribeCustomerBillSummaryRequest &request);
                void DescribeCustomerBillSummaryAsync(const Model::DescribeCustomerBillSummaryRequest& request, const DescribeCustomerBillSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCustomerBillSummaryOutcomeCallable DescribeCustomerBillSummaryCallable(const Model::DescribeCustomerBillSummaryRequest& request);

                /**
                 *This API is used to query the customer information.
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
                 *This API is used to obtain country/region codes.
                 * @param req GetCountryCodesRequest
                 * @return GetCountryCodesOutcome
                 */
                GetCountryCodesOutcome GetCountryCodes(const Model::GetCountryCodesRequest &request);
                void GetCountryCodesAsync(const Model::GetCountryCodesRequest& request, const GetCountryCodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetCountryCodesOutcomeCallable GetCountryCodesCallable(const Model::GetCountryCodesRequest& request);

                /**
                 *This API is used to query the account verification status.
                 * @param req QueryAccountVerificationStatusRequest
                 * @return QueryAccountVerificationStatusOutcome
                 */
                QueryAccountVerificationStatusOutcome QueryAccountVerificationStatus(const Model::QueryAccountVerificationStatusRequest &request);
                void QueryAccountVerificationStatusAsync(const Model::QueryAccountVerificationStatusRequest& request, const QueryAccountVerificationStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryAccountVerificationStatusOutcomeCallable QueryAccountVerificationStatusCallable(const Model::QueryAccountVerificationStatusRequest& request);

                /**
                 *This API is used to query all the credit allocation records of a single customer.
                 * @param req QueryCreditAllocationHistoryRequest
                 * @return QueryCreditAllocationHistoryOutcome
                 */
                QueryCreditAllocationHistoryOutcome QueryCreditAllocationHistory(const Model::QueryCreditAllocationHistoryRequest &request);
                void QueryCreditAllocationHistoryAsync(const Model::QueryCreditAllocationHistoryRequest& request, const QueryCreditAllocationHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryCreditAllocationHistoryOutcomeCallable QueryCreditAllocationHistoryCallable(const Model::QueryCreditAllocationHistoryRequest& request);

                /**
                 *This API is used to query the credit of users in the list.
                 * @param req QueryCreditByUinListRequest
                 * @return QueryCreditByUinListOutcome
                 */
                QueryCreditByUinListOutcome QueryCreditByUinList(const Model::QueryCreditByUinListRequest &request);
                void QueryCreditByUinListAsync(const Model::QueryCreditByUinListRequest& request, const QueryCreditByUinListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryCreditByUinListOutcomeCallable QueryCreditByUinListCallable(const Model::QueryCreditByUinListRequest& request);

                /**
                 *This API is used to query customer credits.
                 * @param req QueryCreditQuotaRequest
                 * @return QueryCreditQuotaOutcome
                 */
                QueryCreditQuotaOutcome QueryCreditQuota(const Model::QueryCreditQuotaRequest &request);
                void QueryCreditQuotaAsync(const Model::QueryCreditQuotaRequest& request, const QueryCreditQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryCreditQuotaOutcomeCallable QueryCreditQuotaCallable(const Model::QueryCreditQuotaRequest& request);

                /**
                 *This API is used for a partner to the credits and basic information of cutomers.
                 * @param req QueryCustomersCreditRequest
                 * @return QueryCustomersCreditOutcome
                 */
                QueryCustomersCreditOutcome QueryCustomersCredit(const Model::QueryCustomersCreditRequest &request);
                void QueryCustomersCreditAsync(const Model::QueryCustomersCreditRequest& request, const QueryCustomersCreditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryCustomersCreditOutcomeCallable QueryCustomersCreditCallable(const Model::QueryCustomersCreditRequest& request);

                /**
                 *This API is used to query the credits of direct customers.
                 * @param req QueryDirectCustomersCreditRequest
                 * @return QueryDirectCustomersCreditOutcome
                 */
                QueryDirectCustomersCreditOutcome QueryDirectCustomersCredit(const Model::QueryDirectCustomersCreditRequest &request);
                void QueryDirectCustomersCreditAsync(const Model::QueryDirectCustomersCreditRequest& request, const QueryDirectCustomersCreditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryDirectCustomersCreditOutcomeCallable QueryDirectCustomersCreditCallable(const Model::QueryDirectCustomersCreditRequest& request);

                /**
                 *This API is used for a partner to query its own total credit, available credit, and used credit in USD.
                 * @param req QueryPartnerCreditRequest
                 * @return QueryPartnerCreditOutcome
                 */
                QueryPartnerCreditOutcome QueryPartnerCredit(const Model::QueryPartnerCreditRequest &request);
                void QueryPartnerCreditAsync(const Model::QueryPartnerCreditRequest& request, const QueryPartnerCreditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryPartnerCreditOutcomeCallable QueryPartnerCreditCallable(const Model::QueryPartnerCreditRequest& request);

                /**
                 *This API is used to query the voucher quota based on the customer UIN.
                 * @param req QueryVoucherAmountByUinRequest
                 * @return QueryVoucherAmountByUinOutcome
                 */
                QueryVoucherAmountByUinOutcome QueryVoucherAmountByUin(const Model::QueryVoucherAmountByUinRequest &request);
                void QueryVoucherAmountByUinAsync(const Model::QueryVoucherAmountByUinRequest& request, const QueryVoucherAmountByUinAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryVoucherAmountByUinOutcomeCallable QueryVoucherAmountByUinCallable(const Model::QueryVoucherAmountByUinRequest& request);

                /**
                 *This API is used to query the voucher list based on the customer UIN.
                 * @param req QueryVoucherListByUinRequest
                 * @return QueryVoucherListByUinOutcome
                 */
                QueryVoucherListByUinOutcome QueryVoucherListByUin(const Model::QueryVoucherListByUinRequest &request);
                void QueryVoucherListByUinAsync(const Model::QueryVoucherListByUinRequest& request, const QueryVoucherListByUinAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryVoucherListByUinOutcomeCallable QueryVoucherListByUinCallable(const Model::QueryVoucherListByUinRequest& request);

                /**
                 *This API is used to query the voucher quota pool.
                 * @param req QueryVoucherPoolRequest
                 * @return QueryVoucherPoolOutcome
                 */
                QueryVoucherPoolOutcome QueryVoucherPool(const Model::QueryVoucherPoolRequest &request);
                void QueryVoucherPoolAsync(const Model::QueryVoucherPoolRequest& request, const QueryVoucherPoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryVoucherPoolOutcomeCallable QueryVoucherPoolCallable(const Model::QueryVoucherPoolRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_INTLPARTNERSMGTCLIENT_H_
