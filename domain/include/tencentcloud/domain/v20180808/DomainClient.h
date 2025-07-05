/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_DOMAINCLIENT_H_
#define TENCENTCLOUD_DOMAIN_V20180808_DOMAINCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/domain/v20180808/model/BatchModifyIntlDomainDNSRequest.h>
#include <tencentcloud/domain/v20180808/model/BatchModifyIntlDomainDNSResponse.h>
#include <tencentcloud/domain/v20180808/model/BatchModifyIntlDomainInfoRequest.h>
#include <tencentcloud/domain/v20180808/model/BatchModifyIntlDomainInfoResponse.h>
#include <tencentcloud/domain/v20180808/model/CheckIntlDomainNewRequest.h>
#include <tencentcloud/domain/v20180808/model/CheckIntlDomainNewResponse.h>
#include <tencentcloud/domain/v20180808/model/CreateIntlDomainBatchRequest.h>
#include <tencentcloud/domain/v20180808/model/CreateIntlDomainBatchResponse.h>
#include <tencentcloud/domain/v20180808/model/CreateIntlPhoneEmailRequest.h>
#include <tencentcloud/domain/v20180808/model/CreateIntlPhoneEmailResponse.h>
#include <tencentcloud/domain/v20180808/model/CreateIntlTemplateRequest.h>
#include <tencentcloud/domain/v20180808/model/CreateIntlTemplateResponse.h>
#include <tencentcloud/domain/v20180808/model/DeleteIntlPhoneEmailRequest.h>
#include <tencentcloud/domain/v20180808/model/DeleteIntlPhoneEmailResponse.h>
#include <tencentcloud/domain/v20180808/model/DeleteIntlTemplateRequest.h>
#include <tencentcloud/domain/v20180808/model/DeleteIntlTemplateResponse.h>
#include <tencentcloud/domain/v20180808/model/DescribeIntlBatchDetailStatusRequest.h>
#include <tencentcloud/domain/v20180808/model/DescribeIntlBatchDetailStatusResponse.h>
#include <tencentcloud/domain/v20180808/model/DescribeIntlBatchOperationLogsRequest.h>
#include <tencentcloud/domain/v20180808/model/DescribeIntlBatchOperationLogsResponse.h>
#include <tencentcloud/domain/v20180808/model/DescribeIntlDomainRequest.h>
#include <tencentcloud/domain/v20180808/model/DescribeIntlDomainResponse.h>
#include <tencentcloud/domain/v20180808/model/DescribeIntlDomainBatchDetailsRequest.h>
#include <tencentcloud/domain/v20180808/model/DescribeIntlDomainBatchDetailsResponse.h>
#include <tencentcloud/domain/v20180808/model/DescribeIntlDomainListRequest.h>
#include <tencentcloud/domain/v20180808/model/DescribeIntlDomainListResponse.h>
#include <tencentcloud/domain/v20180808/model/DescribeIntlDomainPriceNewListRequest.h>
#include <tencentcloud/domain/v20180808/model/DescribeIntlDomainPriceNewListResponse.h>
#include <tencentcloud/domain/v20180808/model/DescribeIntlPhoneEmailListRequest.h>
#include <tencentcloud/domain/v20180808/model/DescribeIntlPhoneEmailListResponse.h>
#include <tencentcloud/domain/v20180808/model/DescribeIntlTemplateRequest.h>
#include <tencentcloud/domain/v20180808/model/DescribeIntlTemplateResponse.h>
#include <tencentcloud/domain/v20180808/model/DescribeIntlTemplateListRequest.h>
#include <tencentcloud/domain/v20180808/model/DescribeIntlTemplateListResponse.h>
#include <tencentcloud/domain/v20180808/model/ModifyOwnerIntlBatchRequest.h>
#include <tencentcloud/domain/v20180808/model/ModifyOwnerIntlBatchResponse.h>
#include <tencentcloud/domain/v20180808/model/RenewIntlDomainBatchRequest.h>
#include <tencentcloud/domain/v20180808/model/RenewIntlDomainBatchResponse.h>
#include <tencentcloud/domain/v20180808/model/SendIntlPhoneEmailCodeRequest.h>
#include <tencentcloud/domain/v20180808/model/SendIntlPhoneEmailCodeResponse.h>
#include <tencentcloud/domain/v20180808/model/SetIntlDomainAutoRenewRequest.h>
#include <tencentcloud/domain/v20180808/model/SetIntlDomainAutoRenewResponse.h>
#include <tencentcloud/domain/v20180808/model/TransferInIntlDomainBatchRequest.h>
#include <tencentcloud/domain/v20180808/model/TransferInIntlDomainBatchResponse.h>
#include <tencentcloud/domain/v20180808/model/TransferProhibitionIntlBatchRequest.h>
#include <tencentcloud/domain/v20180808/model/TransferProhibitionIntlBatchResponse.h>
#include <tencentcloud/domain/v20180808/model/UpdateProhibitionIntlBatchRequest.h>
#include <tencentcloud/domain/v20180808/model/UpdateProhibitionIntlBatchResponse.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            class DomainClient : public AbstractClient
            {
            public:
                DomainClient(const Credential &credential, const std::string &region);
                DomainClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::BatchModifyIntlDomainDNSResponse> BatchModifyIntlDomainDNSOutcome;
                typedef std::future<BatchModifyIntlDomainDNSOutcome> BatchModifyIntlDomainDNSOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::BatchModifyIntlDomainDNSRequest&, BatchModifyIntlDomainDNSOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchModifyIntlDomainDNSAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchModifyIntlDomainInfoResponse> BatchModifyIntlDomainInfoOutcome;
                typedef std::future<BatchModifyIntlDomainInfoOutcome> BatchModifyIntlDomainInfoOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::BatchModifyIntlDomainInfoRequest&, BatchModifyIntlDomainInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchModifyIntlDomainInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckIntlDomainNewResponse> CheckIntlDomainNewOutcome;
                typedef std::future<CheckIntlDomainNewOutcome> CheckIntlDomainNewOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::CheckIntlDomainNewRequest&, CheckIntlDomainNewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckIntlDomainNewAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateIntlDomainBatchResponse> CreateIntlDomainBatchOutcome;
                typedef std::future<CreateIntlDomainBatchOutcome> CreateIntlDomainBatchOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::CreateIntlDomainBatchRequest&, CreateIntlDomainBatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateIntlDomainBatchAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateIntlPhoneEmailResponse> CreateIntlPhoneEmailOutcome;
                typedef std::future<CreateIntlPhoneEmailOutcome> CreateIntlPhoneEmailOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::CreateIntlPhoneEmailRequest&, CreateIntlPhoneEmailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateIntlPhoneEmailAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateIntlTemplateResponse> CreateIntlTemplateOutcome;
                typedef std::future<CreateIntlTemplateOutcome> CreateIntlTemplateOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::CreateIntlTemplateRequest&, CreateIntlTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateIntlTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteIntlPhoneEmailResponse> DeleteIntlPhoneEmailOutcome;
                typedef std::future<DeleteIntlPhoneEmailOutcome> DeleteIntlPhoneEmailOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::DeleteIntlPhoneEmailRequest&, DeleteIntlPhoneEmailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIntlPhoneEmailAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteIntlTemplateResponse> DeleteIntlTemplateOutcome;
                typedef std::future<DeleteIntlTemplateOutcome> DeleteIntlTemplateOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::DeleteIntlTemplateRequest&, DeleteIntlTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIntlTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIntlBatchDetailStatusResponse> DescribeIntlBatchDetailStatusOutcome;
                typedef std::future<DescribeIntlBatchDetailStatusOutcome> DescribeIntlBatchDetailStatusOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::DescribeIntlBatchDetailStatusRequest&, DescribeIntlBatchDetailStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIntlBatchDetailStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIntlBatchOperationLogsResponse> DescribeIntlBatchOperationLogsOutcome;
                typedef std::future<DescribeIntlBatchOperationLogsOutcome> DescribeIntlBatchOperationLogsOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::DescribeIntlBatchOperationLogsRequest&, DescribeIntlBatchOperationLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIntlBatchOperationLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIntlDomainResponse> DescribeIntlDomainOutcome;
                typedef std::future<DescribeIntlDomainOutcome> DescribeIntlDomainOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::DescribeIntlDomainRequest&, DescribeIntlDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIntlDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIntlDomainBatchDetailsResponse> DescribeIntlDomainBatchDetailsOutcome;
                typedef std::future<DescribeIntlDomainBatchDetailsOutcome> DescribeIntlDomainBatchDetailsOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::DescribeIntlDomainBatchDetailsRequest&, DescribeIntlDomainBatchDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIntlDomainBatchDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIntlDomainListResponse> DescribeIntlDomainListOutcome;
                typedef std::future<DescribeIntlDomainListOutcome> DescribeIntlDomainListOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::DescribeIntlDomainListRequest&, DescribeIntlDomainListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIntlDomainListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIntlDomainPriceNewListResponse> DescribeIntlDomainPriceNewListOutcome;
                typedef std::future<DescribeIntlDomainPriceNewListOutcome> DescribeIntlDomainPriceNewListOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::DescribeIntlDomainPriceNewListRequest&, DescribeIntlDomainPriceNewListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIntlDomainPriceNewListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIntlPhoneEmailListResponse> DescribeIntlPhoneEmailListOutcome;
                typedef std::future<DescribeIntlPhoneEmailListOutcome> DescribeIntlPhoneEmailListOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::DescribeIntlPhoneEmailListRequest&, DescribeIntlPhoneEmailListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIntlPhoneEmailListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIntlTemplateResponse> DescribeIntlTemplateOutcome;
                typedef std::future<DescribeIntlTemplateOutcome> DescribeIntlTemplateOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::DescribeIntlTemplateRequest&, DescribeIntlTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIntlTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIntlTemplateListResponse> DescribeIntlTemplateListOutcome;
                typedef std::future<DescribeIntlTemplateListOutcome> DescribeIntlTemplateListOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::DescribeIntlTemplateListRequest&, DescribeIntlTemplateListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIntlTemplateListAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyOwnerIntlBatchResponse> ModifyOwnerIntlBatchOutcome;
                typedef std::future<ModifyOwnerIntlBatchOutcome> ModifyOwnerIntlBatchOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::ModifyOwnerIntlBatchRequest&, ModifyOwnerIntlBatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyOwnerIntlBatchAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewIntlDomainBatchResponse> RenewIntlDomainBatchOutcome;
                typedef std::future<RenewIntlDomainBatchOutcome> RenewIntlDomainBatchOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::RenewIntlDomainBatchRequest&, RenewIntlDomainBatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewIntlDomainBatchAsyncHandler;
                typedef Outcome<Core::Error, Model::SendIntlPhoneEmailCodeResponse> SendIntlPhoneEmailCodeOutcome;
                typedef std::future<SendIntlPhoneEmailCodeOutcome> SendIntlPhoneEmailCodeOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::SendIntlPhoneEmailCodeRequest&, SendIntlPhoneEmailCodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SendIntlPhoneEmailCodeAsyncHandler;
                typedef Outcome<Core::Error, Model::SetIntlDomainAutoRenewResponse> SetIntlDomainAutoRenewOutcome;
                typedef std::future<SetIntlDomainAutoRenewOutcome> SetIntlDomainAutoRenewOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::SetIntlDomainAutoRenewRequest&, SetIntlDomainAutoRenewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetIntlDomainAutoRenewAsyncHandler;
                typedef Outcome<Core::Error, Model::TransferInIntlDomainBatchResponse> TransferInIntlDomainBatchOutcome;
                typedef std::future<TransferInIntlDomainBatchOutcome> TransferInIntlDomainBatchOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::TransferInIntlDomainBatchRequest&, TransferInIntlDomainBatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TransferInIntlDomainBatchAsyncHandler;
                typedef Outcome<Core::Error, Model::TransferProhibitionIntlBatchResponse> TransferProhibitionIntlBatchOutcome;
                typedef std::future<TransferProhibitionIntlBatchOutcome> TransferProhibitionIntlBatchOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::TransferProhibitionIntlBatchRequest&, TransferProhibitionIntlBatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TransferProhibitionIntlBatchAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateProhibitionIntlBatchResponse> UpdateProhibitionIntlBatchOutcome;
                typedef std::future<UpdateProhibitionIntlBatchOutcome> UpdateProhibitionIntlBatchOutcomeCallable;
                typedef std::function<void(const DomainClient*, const Model::UpdateProhibitionIntlBatchRequest&, UpdateProhibitionIntlBatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateProhibitionIntlBatchAsyncHandler;



                /**
                 *This API is used to bulk modify DNS servers for domains.
                 * @param req BatchModifyIntlDomainDNSRequest
                 * @return BatchModifyIntlDomainDNSOutcome
                 */
                BatchModifyIntlDomainDNSOutcome BatchModifyIntlDomainDNS(const Model::BatchModifyIntlDomainDNSRequest &request);
                void BatchModifyIntlDomainDNSAsync(const Model::BatchModifyIntlDomainDNSRequest& request, const BatchModifyIntlDomainDNSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchModifyIntlDomainDNSOutcomeCallable BatchModifyIntlDomainDNSCallable(const Model::BatchModifyIntlDomainDNSRequest& request);

                /**
                 *This API is used to bulk modify registrant information.
                 * @param req BatchModifyIntlDomainInfoRequest
                 * @return BatchModifyIntlDomainInfoOutcome
                 */
                BatchModifyIntlDomainInfoOutcome BatchModifyIntlDomainInfo(const Model::BatchModifyIntlDomainInfoRequest &request);
                void BatchModifyIntlDomainInfoAsync(const Model::BatchModifyIntlDomainInfoRequest& request, const BatchModifyIntlDomainInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchModifyIntlDomainInfoOutcomeCallable BatchModifyIntlDomainInfoCallable(const Model::BatchModifyIntlDomainInfoRequest& request);

                /**
                 *This API is used to check whether a domain is available for registration.
                 * @param req CheckIntlDomainNewRequest
                 * @return CheckIntlDomainNewOutcome
                 */
                CheckIntlDomainNewOutcome CheckIntlDomainNew(const Model::CheckIntlDomainNewRequest &request);
                void CheckIntlDomainNewAsync(const Model::CheckIntlDomainNewRequest& request, const CheckIntlDomainNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckIntlDomainNewOutcomeCallable CheckIntlDomainNewCallable(const Model::CheckIntlDomainNewRequest& request);

                /**
                 *This API is used to bulk register domains.
                 * @param req CreateIntlDomainBatchRequest
                 * @return CreateIntlDomainBatchOutcome
                 */
                CreateIntlDomainBatchOutcome CreateIntlDomainBatch(const Model::CreateIntlDomainBatchRequest &request);
                void CreateIntlDomainBatchAsync(const Model::CreateIntlDomainBatchRequest& request, const CreateIntlDomainBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateIntlDomainBatchOutcomeCallable CreateIntlDomainBatchCallable(const Model::CreateIntlDomainBatchRequest& request);

                /**
                 *This API is used to verify a mobile number or an email address via a verification code.
                 * @param req CreateIntlPhoneEmailRequest
                 * @return CreateIntlPhoneEmailOutcome
                 */
                CreateIntlPhoneEmailOutcome CreateIntlPhoneEmail(const Model::CreateIntlPhoneEmailRequest &request);
                void CreateIntlPhoneEmailAsync(const Model::CreateIntlPhoneEmailRequest& request, const CreateIntlPhoneEmailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateIntlPhoneEmailOutcomeCallable CreateIntlPhoneEmailCallable(const Model::CreateIntlPhoneEmailRequest& request);

                /**
                 *This API is used to add a registrant profile.
                 * @param req CreateIntlTemplateRequest
                 * @return CreateIntlTemplateOutcome
                 */
                CreateIntlTemplateOutcome CreateIntlTemplate(const Model::CreateIntlTemplateRequest &request);
                void CreateIntlTemplateAsync(const Model::CreateIntlTemplateRequest& request, const CreateIntlTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateIntlTemplateOutcomeCallable CreateIntlTemplateCallable(const Model::CreateIntlTemplateRequest& request);

                /**
                 *This API is used to delete a mobile number or an email address.
                 * @param req DeleteIntlPhoneEmailRequest
                 * @return DeleteIntlPhoneEmailOutcome
                 */
                DeleteIntlPhoneEmailOutcome DeleteIntlPhoneEmail(const Model::DeleteIntlPhoneEmailRequest &request);
                void DeleteIntlPhoneEmailAsync(const Model::DeleteIntlPhoneEmailRequest& request, const DeleteIntlPhoneEmailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteIntlPhoneEmailOutcomeCallable DeleteIntlPhoneEmailCallable(const Model::DeleteIntlPhoneEmailRequest& request);

                /**
                 *This API is used to delete a registrant profile.
                 * @param req DeleteIntlTemplateRequest
                 * @return DeleteIntlTemplateOutcome
                 */
                DeleteIntlTemplateOutcome DeleteIntlTemplate(const Model::DeleteIntlTemplateRequest &request);
                void DeleteIntlTemplateAsync(const Model::DeleteIntlTemplateRequest& request, const DeleteIntlTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteIntlTemplateOutcomeCallable DeleteIntlTemplateCallable(const Model::DeleteIntlTemplateRequest& request);

                /**
                 *This API is used to query the status of a bulk task.
                 * @param req DescribeIntlBatchDetailStatusRequest
                 * @return DescribeIntlBatchDetailStatusOutcome
                 */
                DescribeIntlBatchDetailStatusOutcome DescribeIntlBatchDetailStatus(const Model::DescribeIntlBatchDetailStatusRequest &request);
                void DescribeIntlBatchDetailStatusAsync(const Model::DescribeIntlBatchDetailStatusRequest& request, const DescribeIntlBatchDetailStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIntlBatchDetailStatusOutcomeCallable DescribeIntlBatchDetailStatusCallable(const Model::DescribeIntlBatchDetailStatusRequest& request);

                /**
                 *This API is used to query the logs of bulk domain purchase.
                 * @param req DescribeIntlBatchOperationLogsRequest
                 * @return DescribeIntlBatchOperationLogsOutcome
                 */
                DescribeIntlBatchOperationLogsOutcome DescribeIntlBatchOperationLogs(const Model::DescribeIntlBatchOperationLogsRequest &request);
                void DescribeIntlBatchOperationLogsAsync(const Model::DescribeIntlBatchOperationLogsRequest& request, const DescribeIntlBatchOperationLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIntlBatchOperationLogsOutcomeCallable DescribeIntlBatchOperationLogsCallable(const Model::DescribeIntlBatchOperationLogsRequest& request);

                /**
                 *This API is used to query domain information.
                 * @param req DescribeIntlDomainRequest
                 * @return DescribeIntlDomainOutcome
                 */
                DescribeIntlDomainOutcome DescribeIntlDomain(const Model::DescribeIntlDomainRequest &request);
                void DescribeIntlDomainAsync(const Model::DescribeIntlDomainRequest& request, const DescribeIntlDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIntlDomainOutcomeCallable DescribeIntlDomainCallable(const Model::DescribeIntlDomainRequest& request);

                /**
                 *This API is used to get the log details of bulk domain purchase.
                 * @param req DescribeIntlDomainBatchDetailsRequest
                 * @return DescribeIntlDomainBatchDetailsOutcome
                 */
                DescribeIntlDomainBatchDetailsOutcome DescribeIntlDomainBatchDetails(const Model::DescribeIntlDomainBatchDetailsRequest &request);
                void DescribeIntlDomainBatchDetailsAsync(const Model::DescribeIntlDomainBatchDetailsRequest& request, const DescribeIntlDomainBatchDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIntlDomainBatchDetailsOutcomeCallable DescribeIntlDomainBatchDetailsCallable(const Model::DescribeIntlDomainBatchDetailsRequest& request);

                /**
                 *This API is used to query the "My domains" list.
                 * @param req DescribeIntlDomainListRequest
                 * @return DescribeIntlDomainListOutcome
                 */
                DescribeIntlDomainListOutcome DescribeIntlDomainList(const Model::DescribeIntlDomainListRequest &request);
                void DescribeIntlDomainListAsync(const Model::DescribeIntlDomainListRequest& request, const DescribeIntlDomainListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIntlDomainListOutcomeCallable DescribeIntlDomainListCallable(const Model::DescribeIntlDomainListRequest& request);

                /**
                 *This API is used to get the price list by domain suffix.
                 * @param req DescribeIntlDomainPriceNewListRequest
                 * @return DescribeIntlDomainPriceNewListOutcome
                 */
                DescribeIntlDomainPriceNewListOutcome DescribeIntlDomainPriceNewList(const Model::DescribeIntlDomainPriceNewListRequest &request);
                void DescribeIntlDomainPriceNewListAsync(const Model::DescribeIntlDomainPriceNewListRequest& request, const DescribeIntlDomainPriceNewListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIntlDomainPriceNewListOutcomeCallable DescribeIntlDomainPriceNewListCallable(const Model::DescribeIntlDomainPriceNewListRequest& request);

                /**
                 *This API is used to get the list of verified mobile numbers and email addresses.
                 * @param req DescribeIntlPhoneEmailListRequest
                 * @return DescribeIntlPhoneEmailListOutcome
                 */
                DescribeIntlPhoneEmailListOutcome DescribeIntlPhoneEmailList(const Model::DescribeIntlPhoneEmailListRequest &request);
                void DescribeIntlPhoneEmailListAsync(const Model::DescribeIntlPhoneEmailListRequest& request, const DescribeIntlPhoneEmailListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIntlPhoneEmailListOutcomeCallable DescribeIntlPhoneEmailListCallable(const Model::DescribeIntlPhoneEmailListRequest& request);

                /**
                 *This API is used to get the details of a registrant profile.
                 * @param req DescribeIntlTemplateRequest
                 * @return DescribeIntlTemplateOutcome
                 */
                DescribeIntlTemplateOutcome DescribeIntlTemplate(const Model::DescribeIntlTemplateRequest &request);
                void DescribeIntlTemplateAsync(const Model::DescribeIntlTemplateRequest& request, const DescribeIntlTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIntlTemplateOutcomeCallable DescribeIntlTemplateCallable(const Model::DescribeIntlTemplateRequest& request);

                /**
                 *This API is used to get the list of registrant profiles.
                 * @param req DescribeIntlTemplateListRequest
                 * @return DescribeIntlTemplateListOutcome
                 */
                DescribeIntlTemplateListOutcome DescribeIntlTemplateList(const Model::DescribeIntlTemplateListRequest &request);
                void DescribeIntlTemplateListAsync(const Model::DescribeIntlTemplateListRequest& request, const DescribeIntlTemplateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIntlTemplateListOutcomeCallable DescribeIntlTemplateListCallable(const Model::DescribeIntlTemplateListRequest& request);

                /**
                 *This API is used to bulk transfer domains to another account.
                 * @param req ModifyOwnerIntlBatchRequest
                 * @return ModifyOwnerIntlBatchOutcome
                 */
                ModifyOwnerIntlBatchOutcome ModifyOwnerIntlBatch(const Model::ModifyOwnerIntlBatchRequest &request);
                void ModifyOwnerIntlBatchAsync(const Model::ModifyOwnerIntlBatchRequest& request, const ModifyOwnerIntlBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyOwnerIntlBatchOutcomeCallable ModifyOwnerIntlBatchCallable(const Model::ModifyOwnerIntlBatchRequest& request);

                /**
                 *This API is used to bulk renew domains.
                 * @param req RenewIntlDomainBatchRequest
                 * @return RenewIntlDomainBatchOutcome
                 */
                RenewIntlDomainBatchOutcome RenewIntlDomainBatch(const Model::RenewIntlDomainBatchRequest &request);
                void RenewIntlDomainBatchAsync(const Model::RenewIntlDomainBatchRequest& request, const RenewIntlDomainBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewIntlDomainBatchOutcomeCallable RenewIntlDomainBatchCallable(const Model::RenewIntlDomainBatchRequest& request);

                /**
                 *This API is used to send a verification code to a mobile number or an email address.
                 * @param req SendIntlPhoneEmailCodeRequest
                 * @return SendIntlPhoneEmailCodeOutcome
                 */
                SendIntlPhoneEmailCodeOutcome SendIntlPhoneEmailCode(const Model::SendIntlPhoneEmailCodeRequest &request);
                void SendIntlPhoneEmailCodeAsync(const Model::SendIntlPhoneEmailCodeRequest& request, const SendIntlPhoneEmailCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SendIntlPhoneEmailCodeOutcomeCallable SendIntlPhoneEmailCodeCallable(const Model::SendIntlPhoneEmailCodeRequest& request);

                /**
                 *This API is used to set auto-renewal.
                 * @param req SetIntlDomainAutoRenewRequest
                 * @return SetIntlDomainAutoRenewOutcome
                 */
                SetIntlDomainAutoRenewOutcome SetIntlDomainAutoRenew(const Model::SetIntlDomainAutoRenewRequest &request);
                void SetIntlDomainAutoRenewAsync(const Model::SetIntlDomainAutoRenewRequest& request, const SetIntlDomainAutoRenewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetIntlDomainAutoRenewOutcomeCallable SetIntlDomainAutoRenewCallable(const Model::SetIntlDomainAutoRenewRequest& request);

                /**
                 *This API is used to bulk transfer domains in.
                 * @param req TransferInIntlDomainBatchRequest
                 * @return TransferInIntlDomainBatchOutcome
                 */
                TransferInIntlDomainBatchOutcome TransferInIntlDomainBatch(const Model::TransferInIntlDomainBatchRequest &request);
                void TransferInIntlDomainBatchAsync(const Model::TransferInIntlDomainBatchRequest& request, const TransferInIntlDomainBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TransferInIntlDomainBatchOutcomeCallable TransferInIntlDomainBatchCallable(const Model::TransferInIntlDomainBatchRequest& request);

                /**
                 *This API is used to bulk set transfer prohibition for domains.
                 * @param req TransferProhibitionIntlBatchRequest
                 * @return TransferProhibitionIntlBatchOutcome
                 */
                TransferProhibitionIntlBatchOutcome TransferProhibitionIntlBatch(const Model::TransferProhibitionIntlBatchRequest &request);
                void TransferProhibitionIntlBatchAsync(const Model::TransferProhibitionIntlBatchRequest& request, const TransferProhibitionIntlBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TransferProhibitionIntlBatchOutcomeCallable TransferProhibitionIntlBatchCallable(const Model::TransferProhibitionIntlBatchRequest& request);

                /**
                 *This API is used to bulk set update prohibition for domains.
                 * @param req UpdateProhibitionIntlBatchRequest
                 * @return UpdateProhibitionIntlBatchOutcome
                 */
                UpdateProhibitionIntlBatchOutcome UpdateProhibitionIntlBatch(const Model::UpdateProhibitionIntlBatchRequest &request);
                void UpdateProhibitionIntlBatchAsync(const Model::UpdateProhibitionIntlBatchRequest& request, const UpdateProhibitionIntlBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateProhibitionIntlBatchOutcomeCallable UpdateProhibitionIntlBatchCallable(const Model::UpdateProhibitionIntlBatchRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_DOMAINCLIENT_H_
