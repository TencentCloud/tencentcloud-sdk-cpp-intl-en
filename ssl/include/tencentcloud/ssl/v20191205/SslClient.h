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

#ifndef TENCENTCLOUD_SSL_V20191205_SSLCLIENT_H_
#define TENCENTCLOUD_SSL_V20191205_SSLCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ssl/v20191205/model/ApplyCertificateRequest.h>
#include <tencentcloud/ssl/v20191205/model/ApplyCertificateResponse.h>
#include <tencentcloud/ssl/v20191205/model/BatchDeleteCSRRequest.h>
#include <tencentcloud/ssl/v20191205/model/BatchDeleteCSRResponse.h>
#include <tencentcloud/ssl/v20191205/model/CancelAuditCertificateRequest.h>
#include <tencentcloud/ssl/v20191205/model/CancelAuditCertificateResponse.h>
#include <tencentcloud/ssl/v20191205/model/CancelCertificateOrderRequest.h>
#include <tencentcloud/ssl/v20191205/model/CancelCertificateOrderResponse.h>
#include <tencentcloud/ssl/v20191205/model/CommitCertificateInformationRequest.h>
#include <tencentcloud/ssl/v20191205/model/CommitCertificateInformationResponse.h>
#include <tencentcloud/ssl/v20191205/model/CreateCSRRequest.h>
#include <tencentcloud/ssl/v20191205/model/CreateCSRResponse.h>
#include <tencentcloud/ssl/v20191205/model/CreateCertificateRequest.h>
#include <tencentcloud/ssl/v20191205/model/CreateCertificateResponse.h>
#include <tencentcloud/ssl/v20191205/model/CreateCertificateBindResourceSyncTaskRequest.h>
#include <tencentcloud/ssl/v20191205/model/CreateCertificateBindResourceSyncTaskResponse.h>
#include <tencentcloud/ssl/v20191205/model/DeleteCertificateRequest.h>
#include <tencentcloud/ssl/v20191205/model/DeleteCertificateResponse.h>
#include <tencentcloud/ssl/v20191205/model/DescribeCSRRequest.h>
#include <tencentcloud/ssl/v20191205/model/DescribeCSRResponse.h>
#include <tencentcloud/ssl/v20191205/model/DescribeCSRSetRequest.h>
#include <tencentcloud/ssl/v20191205/model/DescribeCSRSetResponse.h>
#include <tencentcloud/ssl/v20191205/model/DescribeCertificateRequest.h>
#include <tencentcloud/ssl/v20191205/model/DescribeCertificateResponse.h>
#include <tencentcloud/ssl/v20191205/model/DescribeCertificateBindResourceTaskDetailRequest.h>
#include <tencentcloud/ssl/v20191205/model/DescribeCertificateBindResourceTaskDetailResponse.h>
#include <tencentcloud/ssl/v20191205/model/DescribeCertificateBindResourceTaskResultRequest.h>
#include <tencentcloud/ssl/v20191205/model/DescribeCertificateBindResourceTaskResultResponse.h>
#include <tencentcloud/ssl/v20191205/model/DescribeCertificateDetailRequest.h>
#include <tencentcloud/ssl/v20191205/model/DescribeCertificateDetailResponse.h>
#include <tencentcloud/ssl/v20191205/model/DescribeCertificateOperateLogsRequest.h>
#include <tencentcloud/ssl/v20191205/model/DescribeCertificateOperateLogsResponse.h>
#include <tencentcloud/ssl/v20191205/model/DescribeCertificatesRequest.h>
#include <tencentcloud/ssl/v20191205/model/DescribeCertificatesResponse.h>
#include <tencentcloud/ssl/v20191205/model/DescribeHostTeoInstanceListRequest.h>
#include <tencentcloud/ssl/v20191205/model/DescribeHostTeoInstanceListResponse.h>
#include <tencentcloud/ssl/v20191205/model/DescribeHostUpdateRecordRequest.h>
#include <tencentcloud/ssl/v20191205/model/DescribeHostUpdateRecordResponse.h>
#include <tencentcloud/ssl/v20191205/model/DescribeHostUpdateRecordDetailRequest.h>
#include <tencentcloud/ssl/v20191205/model/DescribeHostUpdateRecordDetailResponse.h>
#include <tencentcloud/ssl/v20191205/model/DownloadCertificateRequest.h>
#include <tencentcloud/ssl/v20191205/model/DownloadCertificateResponse.h>
#include <tencentcloud/ssl/v20191205/model/ModifyCSRRequest.h>
#include <tencentcloud/ssl/v20191205/model/ModifyCSRResponse.h>
#include <tencentcloud/ssl/v20191205/model/ModifyCertificateAliasRequest.h>
#include <tencentcloud/ssl/v20191205/model/ModifyCertificateAliasResponse.h>
#include <tencentcloud/ssl/v20191205/model/ModifyCertificateProjectRequest.h>
#include <tencentcloud/ssl/v20191205/model/ModifyCertificateProjectResponse.h>
#include <tencentcloud/ssl/v20191205/model/ModifyCertificateResubmitRequest.h>
#include <tencentcloud/ssl/v20191205/model/ModifyCertificateResubmitResponse.h>
#include <tencentcloud/ssl/v20191205/model/ReplaceCertificateRequest.h>
#include <tencentcloud/ssl/v20191205/model/ReplaceCertificateResponse.h>
#include <tencentcloud/ssl/v20191205/model/SubmitCertificateInformationRequest.h>
#include <tencentcloud/ssl/v20191205/model/SubmitCertificateInformationResponse.h>
#include <tencentcloud/ssl/v20191205/model/UpdateCertificateInstanceRequest.h>
#include <tencentcloud/ssl/v20191205/model/UpdateCertificateInstanceResponse.h>
#include <tencentcloud/ssl/v20191205/model/UpdateCertificateRecordRetryRequest.h>
#include <tencentcloud/ssl/v20191205/model/UpdateCertificateRecordRetryResponse.h>
#include <tencentcloud/ssl/v20191205/model/UpdateCertificateRecordRollbackRequest.h>
#include <tencentcloud/ssl/v20191205/model/UpdateCertificateRecordRollbackResponse.h>
#include <tencentcloud/ssl/v20191205/model/UploadCertificateRequest.h>
#include <tencentcloud/ssl/v20191205/model/UploadCertificateResponse.h>
#include <tencentcloud/ssl/v20191205/model/UploadConfirmLetterRequest.h>
#include <tencentcloud/ssl/v20191205/model/UploadConfirmLetterResponse.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            class SslClient : public AbstractClient
            {
            public:
                SslClient(const Credential &credential, const std::string &region);
                SslClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ApplyCertificateResponse> ApplyCertificateOutcome;
                typedef std::future<ApplyCertificateOutcome> ApplyCertificateOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::ApplyCertificateRequest&, ApplyCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplyCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchDeleteCSRResponse> BatchDeleteCSROutcome;
                typedef std::future<BatchDeleteCSROutcome> BatchDeleteCSROutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::BatchDeleteCSRRequest&, BatchDeleteCSROutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchDeleteCSRAsyncHandler;
                typedef Outcome<Core::Error, Model::CancelAuditCertificateResponse> CancelAuditCertificateOutcome;
                typedef std::future<CancelAuditCertificateOutcome> CancelAuditCertificateOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::CancelAuditCertificateRequest&, CancelAuditCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelAuditCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::CancelCertificateOrderResponse> CancelCertificateOrderOutcome;
                typedef std::future<CancelCertificateOrderOutcome> CancelCertificateOrderOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::CancelCertificateOrderRequest&, CancelCertificateOrderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelCertificateOrderAsyncHandler;
                typedef Outcome<Core::Error, Model::CommitCertificateInformationResponse> CommitCertificateInformationOutcome;
                typedef std::future<CommitCertificateInformationOutcome> CommitCertificateInformationOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::CommitCertificateInformationRequest&, CommitCertificateInformationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CommitCertificateInformationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCSRResponse> CreateCSROutcome;
                typedef std::future<CreateCSROutcome> CreateCSROutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::CreateCSRRequest&, CreateCSROutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCSRAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCertificateResponse> CreateCertificateOutcome;
                typedef std::future<CreateCertificateOutcome> CreateCertificateOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::CreateCertificateRequest&, CreateCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCertificateBindResourceSyncTaskResponse> CreateCertificateBindResourceSyncTaskOutcome;
                typedef std::future<CreateCertificateBindResourceSyncTaskOutcome> CreateCertificateBindResourceSyncTaskOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::CreateCertificateBindResourceSyncTaskRequest&, CreateCertificateBindResourceSyncTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCertificateBindResourceSyncTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCertificateResponse> DeleteCertificateOutcome;
                typedef std::future<DeleteCertificateOutcome> DeleteCertificateOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DeleteCertificateRequest&, DeleteCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCSRResponse> DescribeCSROutcome;
                typedef std::future<DescribeCSROutcome> DescribeCSROutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DescribeCSRRequest&, DescribeCSROutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCSRAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCSRSetResponse> DescribeCSRSetOutcome;
                typedef std::future<DescribeCSRSetOutcome> DescribeCSRSetOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DescribeCSRSetRequest&, DescribeCSRSetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCSRSetAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCertificateResponse> DescribeCertificateOutcome;
                typedef std::future<DescribeCertificateOutcome> DescribeCertificateOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DescribeCertificateRequest&, DescribeCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCertificateBindResourceTaskDetailResponse> DescribeCertificateBindResourceTaskDetailOutcome;
                typedef std::future<DescribeCertificateBindResourceTaskDetailOutcome> DescribeCertificateBindResourceTaskDetailOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DescribeCertificateBindResourceTaskDetailRequest&, DescribeCertificateBindResourceTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCertificateBindResourceTaskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCertificateBindResourceTaskResultResponse> DescribeCertificateBindResourceTaskResultOutcome;
                typedef std::future<DescribeCertificateBindResourceTaskResultOutcome> DescribeCertificateBindResourceTaskResultOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DescribeCertificateBindResourceTaskResultRequest&, DescribeCertificateBindResourceTaskResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCertificateBindResourceTaskResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCertificateDetailResponse> DescribeCertificateDetailOutcome;
                typedef std::future<DescribeCertificateDetailOutcome> DescribeCertificateDetailOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DescribeCertificateDetailRequest&, DescribeCertificateDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCertificateDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCertificateOperateLogsResponse> DescribeCertificateOperateLogsOutcome;
                typedef std::future<DescribeCertificateOperateLogsOutcome> DescribeCertificateOperateLogsOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DescribeCertificateOperateLogsRequest&, DescribeCertificateOperateLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCertificateOperateLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCertificatesResponse> DescribeCertificatesOutcome;
                typedef std::future<DescribeCertificatesOutcome> DescribeCertificatesOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DescribeCertificatesRequest&, DescribeCertificatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCertificatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHostTeoInstanceListResponse> DescribeHostTeoInstanceListOutcome;
                typedef std::future<DescribeHostTeoInstanceListOutcome> DescribeHostTeoInstanceListOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DescribeHostTeoInstanceListRequest&, DescribeHostTeoInstanceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostTeoInstanceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHostUpdateRecordResponse> DescribeHostUpdateRecordOutcome;
                typedef std::future<DescribeHostUpdateRecordOutcome> DescribeHostUpdateRecordOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DescribeHostUpdateRecordRequest&, DescribeHostUpdateRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostUpdateRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHostUpdateRecordDetailResponse> DescribeHostUpdateRecordDetailOutcome;
                typedef std::future<DescribeHostUpdateRecordDetailOutcome> DescribeHostUpdateRecordDetailOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DescribeHostUpdateRecordDetailRequest&, DescribeHostUpdateRecordDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostUpdateRecordDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DownloadCertificateResponse> DownloadCertificateOutcome;
                typedef std::future<DownloadCertificateOutcome> DownloadCertificateOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DownloadCertificateRequest&, DownloadCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DownloadCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCSRResponse> ModifyCSROutcome;
                typedef std::future<ModifyCSROutcome> ModifyCSROutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::ModifyCSRRequest&, ModifyCSROutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCSRAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCertificateAliasResponse> ModifyCertificateAliasOutcome;
                typedef std::future<ModifyCertificateAliasOutcome> ModifyCertificateAliasOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::ModifyCertificateAliasRequest&, ModifyCertificateAliasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCertificateAliasAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCertificateProjectResponse> ModifyCertificateProjectOutcome;
                typedef std::future<ModifyCertificateProjectOutcome> ModifyCertificateProjectOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::ModifyCertificateProjectRequest&, ModifyCertificateProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCertificateProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCertificateResubmitResponse> ModifyCertificateResubmitOutcome;
                typedef std::future<ModifyCertificateResubmitOutcome> ModifyCertificateResubmitOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::ModifyCertificateResubmitRequest&, ModifyCertificateResubmitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCertificateResubmitAsyncHandler;
                typedef Outcome<Core::Error, Model::ReplaceCertificateResponse> ReplaceCertificateOutcome;
                typedef std::future<ReplaceCertificateOutcome> ReplaceCertificateOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::ReplaceCertificateRequest&, ReplaceCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReplaceCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitCertificateInformationResponse> SubmitCertificateInformationOutcome;
                typedef std::future<SubmitCertificateInformationOutcome> SubmitCertificateInformationOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::SubmitCertificateInformationRequest&, SubmitCertificateInformationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitCertificateInformationAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateCertificateInstanceResponse> UpdateCertificateInstanceOutcome;
                typedef std::future<UpdateCertificateInstanceOutcome> UpdateCertificateInstanceOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::UpdateCertificateInstanceRequest&, UpdateCertificateInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCertificateInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateCertificateRecordRetryResponse> UpdateCertificateRecordRetryOutcome;
                typedef std::future<UpdateCertificateRecordRetryOutcome> UpdateCertificateRecordRetryOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::UpdateCertificateRecordRetryRequest&, UpdateCertificateRecordRetryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCertificateRecordRetryAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateCertificateRecordRollbackResponse> UpdateCertificateRecordRollbackOutcome;
                typedef std::future<UpdateCertificateRecordRollbackOutcome> UpdateCertificateRecordRollbackOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::UpdateCertificateRecordRollbackRequest&, UpdateCertificateRecordRollbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCertificateRecordRollbackAsyncHandler;
                typedef Outcome<Core::Error, Model::UploadCertificateResponse> UploadCertificateOutcome;
                typedef std::future<UploadCertificateOutcome> UploadCertificateOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::UploadCertificateRequest&, UploadCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::UploadConfirmLetterResponse> UploadConfirmLetterOutcome;
                typedef std::future<UploadConfirmLetterOutcome> UploadConfirmLetterOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::UploadConfirmLetterRequest&, UploadConfirmLetterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadConfirmLetterAsyncHandler;



                /**
                 *This API is used to apply for a free certificate.
                 * @param req ApplyCertificateRequest
                 * @return ApplyCertificateOutcome
                 */
                ApplyCertificateOutcome ApplyCertificate(const Model::ApplyCertificateRequest &request);
                void ApplyCertificateAsync(const Model::ApplyCertificateRequest& request, const ApplyCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplyCertificateOutcomeCallable ApplyCertificateCallable(const Model::ApplyCertificateRequest& request);

                /**
                 *This API is used to batch delete CSRs.
                 * @param req BatchDeleteCSRRequest
                 * @return BatchDeleteCSROutcome
                 */
                BatchDeleteCSROutcome BatchDeleteCSR(const Model::BatchDeleteCSRRequest &request);
                void BatchDeleteCSRAsync(const Model::BatchDeleteCSRRequest& request, const BatchDeleteCSRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchDeleteCSROutcomeCallable BatchDeleteCSRCallable(const Model::BatchDeleteCSRRequest& request);

                /**
                 *This API is used to cancel certificate review.
                 * @param req CancelAuditCertificateRequest
                 * @return CancelAuditCertificateOutcome
                 */
                CancelAuditCertificateOutcome CancelAuditCertificate(const Model::CancelAuditCertificateRequest &request);
                void CancelAuditCertificateAsync(const Model::CancelAuditCertificateRequest& request, const CancelAuditCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelAuditCertificateOutcomeCallable CancelAuditCertificateCallable(const Model::CancelAuditCertificateRequest& request);

                /**
                 *This API is used to cancel a certificate order.
                 * @param req CancelCertificateOrderRequest
                 * @return CancelCertificateOrderOutcome
                 */
                CancelCertificateOrderOutcome CancelCertificateOrder(const Model::CancelCertificateOrderRequest &request);
                void CancelCertificateOrderAsync(const Model::CancelCertificateOrderRequest& request, const CancelCertificateOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelCertificateOrderOutcomeCallable CancelCertificateOrderCallable(const Model::CancelCertificateOrderRequest& request);

                /**
                 *Submit payment certificate orders; This API does not maintain new features, and you can use the new API to submit orders. [CertificateOrderSubmit](https://intl.cloud.tencent.com/document/product/400/116032?from_cn_redirect=1).
                 * @param req CommitCertificateInformationRequest
                 * @return CommitCertificateInformationOutcome
                 */
                CommitCertificateInformationOutcome CommitCertificateInformation(const Model::CommitCertificateInformationRequest &request);
                void CommitCertificateInformationAsync(const Model::CommitCertificateInformationRequest& request, const CommitCertificateInformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CommitCertificateInformationOutcomeCallable CommitCertificateInformationCallable(const Model::CommitCertificateInformationRequest& request);

                /**
                 *This API is used to create a CSR.
                 * @param req CreateCSRRequest
                 * @return CreateCSROutcome
                 */
                CreateCSROutcome CreateCSR(const Model::CreateCSRRequest &request);
                void CreateCSRAsync(const Model::CreateCSRRequest& request, const CreateCSRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCSROutcomeCallable CreateCSRCallable(const Model::CreateCSRRequest& request);

                /**
                 *This API is used to purchase a certificate.
                 * @param req CreateCertificateRequest
                 * @return CreateCertificateOutcome
                 */
                CreateCertificateOutcome CreateCertificate(const Model::CreateCertificateRequest &request);
                void CreateCertificateAsync(const Model::CreateCertificateRequest& request, const CreateCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCertificateOutcomeCallable CreateCertificateCallable(const Model::CreateCertificateRequest& request);

                /**
                 *This API is used to create an async task for querying the cloud resources associated with a certificate. If such a task already exists under the certificate ID, the ID of this task is returned as the result. The following types of cloud resources are supported: CLB, CDN, WAF, LIVE, VOD, DDOS, TKE, APIGATEWAY, TCB, and TEO (EDGEONE). You can query the result of this task using the `DescribeCertificateBindResourceTaskResult` API.
                 * @param req CreateCertificateBindResourceSyncTaskRequest
                 * @return CreateCertificateBindResourceSyncTaskOutcome
                 */
                CreateCertificateBindResourceSyncTaskOutcome CreateCertificateBindResourceSyncTask(const Model::CreateCertificateBindResourceSyncTaskRequest &request);
                void CreateCertificateBindResourceSyncTaskAsync(const Model::CreateCertificateBindResourceSyncTaskRequest& request, const CreateCertificateBindResourceSyncTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCertificateBindResourceSyncTaskOutcomeCallable CreateCertificateBindResourceSyncTaskCallable(const Model::CreateCertificateBindResourceSyncTaskRequest& request);

                /**
                 *This API is used to delete a certificate.
                 * @param req DeleteCertificateRequest
                 * @return DeleteCertificateOutcome
                 */
                DeleteCertificateOutcome DeleteCertificate(const Model::DeleteCertificateRequest &request);
                void DeleteCertificateAsync(const Model::DeleteCertificateRequest& request, const DeleteCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCertificateOutcomeCallable DeleteCertificateCallable(const Model::DeleteCertificateRequest& request);

                /**
                 *This API is used to query the details of a CSR.
                 * @param req DescribeCSRRequest
                 * @return DescribeCSROutcome
                 */
                DescribeCSROutcome DescribeCSR(const Model::DescribeCSRRequest &request);
                void DescribeCSRAsync(const Model::DescribeCSRRequest& request, const DescribeCSRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCSROutcomeCallable DescribeCSRCallable(const Model::DescribeCSRRequest& request);

                /**
                 *This API is used to query the CSR list.
                 * @param req DescribeCSRSetRequest
                 * @return DescribeCSRSetOutcome
                 */
                DescribeCSRSetOutcome DescribeCSRSet(const Model::DescribeCSRSetRequest &request);
                void DescribeCSRSetAsync(const Model::DescribeCSRSetRequest& request, const DescribeCSRSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCSRSetOutcomeCallable DescribeCSRSetCallable(const Model::DescribeCSRSetRequest& request);

                /**
                 *This API is used to get certificate information.
                 * @param req DescribeCertificateRequest
                 * @return DescribeCertificateOutcome
                 */
                DescribeCertificateOutcome DescribeCertificate(const Model::DescribeCertificateRequest &request);
                void DescribeCertificateAsync(const Model::DescribeCertificateRequest& request, const DescribeCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCertificateOutcomeCallable DescribeCertificateCallable(const Model::DescribeCertificateRequest& request);

                /**
                 *This API is used to query the task result of CreateCertificateBindResourceSyncTask, returning the asynchronous task result of the certificate associated with cloud resources, supporting the following cloud resources: clb, cdn, waf, live, vod, ddos, tke, apigateway, tcb, teo (edgeOne), cos.
                 * @param req DescribeCertificateBindResourceTaskDetailRequest
                 * @return DescribeCertificateBindResourceTaskDetailOutcome
                 */
                DescribeCertificateBindResourceTaskDetailOutcome DescribeCertificateBindResourceTaskDetail(const Model::DescribeCertificateBindResourceTaskDetailRequest &request);
                void DescribeCertificateBindResourceTaskDetailAsync(const Model::DescribeCertificateBindResourceTaskDetailRequest& request, const DescribeCertificateBindResourceTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCertificateBindResourceTaskDetailOutcomeCallable DescribeCertificateBindResourceTaskDetailCallable(const Model::DescribeCertificateBindResourceTaskDetailRequest& request);

                /**
                 *This API is used to query the result of an async task created with `CreateCertificateBindResourceSyncTask` to query cloud resources associated with a certificate. The following types of cloud resources are supported: CLB, CDN, WAF, LIVE, VOD, DDOS, TKE, APIGATEWAY, TCB, and TEO (EDGEONE).
                 * @param req DescribeCertificateBindResourceTaskResultRequest
                 * @return DescribeCertificateBindResourceTaskResultOutcome
                 */
                DescribeCertificateBindResourceTaskResultOutcome DescribeCertificateBindResourceTaskResult(const Model::DescribeCertificateBindResourceTaskResultRequest &request);
                void DescribeCertificateBindResourceTaskResultAsync(const Model::DescribeCertificateBindResourceTaskResultRequest& request, const DescribeCertificateBindResourceTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCertificateBindResourceTaskResultOutcomeCallable DescribeCertificateBindResourceTaskResultCallable(const Model::DescribeCertificateBindResourceTaskResultRequest& request);

                /**
                 *This API is used to get certificate details.
                 * @param req DescribeCertificateDetailRequest
                 * @return DescribeCertificateDetailOutcome
                 */
                DescribeCertificateDetailOutcome DescribeCertificateDetail(const Model::DescribeCertificateDetailRequest &request);
                void DescribeCertificateDetailAsync(const Model::DescribeCertificateDetailRequest& request, const DescribeCertificateDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCertificateDetailOutcomeCallable DescribeCertificateDetailCallable(const Model::DescribeCertificateDetailRequest& request);

                /**
                 *This API is used to get certificate operation logs in the current account.
                 * @param req DescribeCertificateOperateLogsRequest
                 * @return DescribeCertificateOperateLogsOutcome
                 */
                DescribeCertificateOperateLogsOutcome DescribeCertificateOperateLogs(const Model::DescribeCertificateOperateLogsRequest &request);
                void DescribeCertificateOperateLogsAsync(const Model::DescribeCertificateOperateLogsRequest& request, const DescribeCertificateOperateLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCertificateOperateLogsOutcomeCallable DescribeCertificateOperateLogsCallable(const Model::DescribeCertificateOperateLogsRequest& request);

                /**
                 *This API is used to get the certificate list.
                 * @param req DescribeCertificatesRequest
                 * @return DescribeCertificatesOutcome
                 */
                DescribeCertificatesOutcome DescribeCertificates(const Model::DescribeCertificatesRequest &request);
                void DescribeCertificatesAsync(const Model::DescribeCertificatesRequest& request, const DescribeCertificatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCertificatesOutcomeCallable DescribeCertificatesCallable(const Model::DescribeCertificatesRequest& request);

                /**
                 *This API is used to query the list of EdgeOne instances to which a certificate can be deployed.
                 * @param req DescribeHostTeoInstanceListRequest
                 * @return DescribeHostTeoInstanceListOutcome
                 */
                DescribeHostTeoInstanceListOutcome DescribeHostTeoInstanceList(const Model::DescribeHostTeoInstanceListRequest &request);
                void DescribeHostTeoInstanceListAsync(const Model::DescribeHostTeoInstanceListRequest& request, const DescribeHostTeoInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHostTeoInstanceListOutcomeCallable DescribeHostTeoInstanceListCallable(const Model::DescribeHostTeoInstanceListRequest& request);

                /**
                 *Query certificate cloud resource update record list
                 * @param req DescribeHostUpdateRecordRequest
                 * @return DescribeHostUpdateRecordOutcome
                 */
                DescribeHostUpdateRecordOutcome DescribeHostUpdateRecord(const Model::DescribeHostUpdateRecordRequest &request);
                void DescribeHostUpdateRecordAsync(const Model::DescribeHostUpdateRecordRequest& request, const DescribeHostUpdateRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHostUpdateRecordOutcomeCallable DescribeHostUpdateRecordCallable(const Model::DescribeHostUpdateRecordRequest& request);

                /**
                 *This API is used to query the update record details of certificate cloud resources.
                 * @param req DescribeHostUpdateRecordDetailRequest
                 * @return DescribeHostUpdateRecordDetailOutcome
                 */
                DescribeHostUpdateRecordDetailOutcome DescribeHostUpdateRecordDetail(const Model::DescribeHostUpdateRecordDetailRequest &request);
                void DescribeHostUpdateRecordDetailAsync(const Model::DescribeHostUpdateRecordDetailRequest& request, const DescribeHostUpdateRecordDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHostUpdateRecordDetailOutcomeCallable DescribeHostUpdateRecordDetailCallable(const Model::DescribeHostUpdateRecordDetailRequest& request);

                /**
                 *This API is used to download a certificate.
                 * @param req DownloadCertificateRequest
                 * @return DownloadCertificateOutcome
                 */
                DownloadCertificateOutcome DownloadCertificate(const Model::DownloadCertificateRequest &request);
                void DownloadCertificateAsync(const Model::DownloadCertificateRequest& request, const DownloadCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DownloadCertificateOutcomeCallable DownloadCertificateCallable(const Model::DownloadCertificateRequest& request);

                /**
                 *This API is used to modify the information of a CSR.
                 * @param req ModifyCSRRequest
                 * @return ModifyCSROutcome
                 */
                ModifyCSROutcome ModifyCSR(const Model::ModifyCSRRequest &request);
                void ModifyCSRAsync(const Model::ModifyCSRRequest& request, const ModifyCSRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCSROutcomeCallable ModifyCSRCallable(const Model::ModifyCSRRequest& request);

                /**
                 *This API is used to modify a certificate alias by passing in the certificate ID and new alias.
                 * @param req ModifyCertificateAliasRequest
                 * @return ModifyCertificateAliasOutcome
                 */
                ModifyCertificateAliasOutcome ModifyCertificateAlias(const Model::ModifyCertificateAliasRequest &request);
                void ModifyCertificateAliasAsync(const Model::ModifyCertificateAliasRequest& request, const ModifyCertificateAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCertificateAliasOutcomeCallable ModifyCertificateAliasCallable(const Model::ModifyCertificateAliasRequest& request);

                /**
                 *This API is used to modify the projects of multiple certificates.
                 * @param req ModifyCertificateProjectRequest
                 * @return ModifyCertificateProjectOutcome
                 */
                ModifyCertificateProjectOutcome ModifyCertificateProject(const Model::ModifyCertificateProjectRequest &request);
                void ModifyCertificateProjectAsync(const Model::ModifyCertificateProjectRequest& request, const ModifyCertificateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCertificateProjectOutcomeCallable ModifyCertificateProjectCallable(const Model::ModifyCertificateProjectRequest& request);

                /**
                 *This API is used to re-submit a review application for a paid certificate whose review failed or was canceled.
                 * @param req ModifyCertificateResubmitRequest
                 * @return ModifyCertificateResubmitOutcome
                 */
                ModifyCertificateResubmitOutcome ModifyCertificateResubmit(const Model::ModifyCertificateResubmitRequest &request);
                void ModifyCertificateResubmitAsync(const Model::ModifyCertificateResubmitRequest& request, const ModifyCertificateResubmitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCertificateResubmitOutcomeCallable ModifyCertificateResubmitCallable(const Model::ModifyCertificateResubmitRequest& request);

                /**
                 *This API is used to reissue a certificate. Note that if you have applied for a free certificate, only an RSA-2048 certificate will be reissued, and the certificate can be reissued only once.
                 * @param req ReplaceCertificateRequest
                 * @return ReplaceCertificateOutcome
                 */
                ReplaceCertificateOutcome ReplaceCertificate(const Model::ReplaceCertificateRequest &request);
                void ReplaceCertificateAsync(const Model::ReplaceCertificateRequest& request, const ReplaceCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReplaceCertificateOutcomeCallable ReplaceCertificateCallable(const Model::ReplaceCertificateRequest& request);

                /**
                 *Submit documentation for paid certificates; This API does not maintain new features, and you can use the new API to submit documentation. [CertificateInfoSubmit](https://intl.cloud.tencent.com/document/product/400/116033?from_cn_redirect=1).
                 * @param req SubmitCertificateInformationRequest
                 * @return SubmitCertificateInformationOutcome
                 */
                SubmitCertificateInformationOutcome SubmitCertificateInformation(const Model::SubmitCertificateInformationRequest &request);
                void SubmitCertificateInformationAsync(const Model::SubmitCertificateInformationRequest& request, const SubmitCertificateInformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitCertificateInformationOutcomeCallable SubmitCertificateInformationCallable(const Model::SubmitCertificateInformationRequest& request);

                /**
                 *This API is used to one-click update old certificate resources. This API is asynchronous. After calling it, if DeployRecordId is 0, it means the task is in progress. Repeat the request to this API. When the returned DeployRecordId is greater than 0, it means the task creation is successful. If it is not created successfully, an exception will be thrown.
                 * @param req UpdateCertificateInstanceRequest
                 * @return UpdateCertificateInstanceOutcome
                 */
                UpdateCertificateInstanceOutcome UpdateCertificateInstance(const Model::UpdateCertificateInstanceRequest &request);
                void UpdateCertificateInstanceAsync(const Model::UpdateCertificateInstanceRequest& request, const UpdateCertificateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateCertificateInstanceOutcomeCallable UpdateCertificateInstanceCallable(const Model::UpdateCertificateInstanceRequest& request);

                /**
                 *Cloud resource update deployment retry record
                 * @param req UpdateCertificateRecordRetryRequest
                 * @return UpdateCertificateRecordRetryOutcome
                 */
                UpdateCertificateRecordRetryOutcome UpdateCertificateRecordRetry(const Model::UpdateCertificateRecordRetryRequest &request);
                void UpdateCertificateRecordRetryAsync(const Model::UpdateCertificateRecordRetryRequest& request, const UpdateCertificateRecordRetryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateCertificateRecordRetryOutcomeCallable UpdateCertificateRecordRetryCallable(const Model::UpdateCertificateRecordRetryRequest& request);

                /**
                 *Cloud resource update one-click rollback
                 * @param req UpdateCertificateRecordRollbackRequest
                 * @return UpdateCertificateRecordRollbackOutcome
                 */
                UpdateCertificateRecordRollbackOutcome UpdateCertificateRecordRollback(const Model::UpdateCertificateRecordRollbackRequest &request);
                void UpdateCertificateRecordRollbackAsync(const Model::UpdateCertificateRecordRollbackRequest& request, const UpdateCertificateRecordRollbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateCertificateRecordRollbackOutcomeCallable UpdateCertificateRecordRollbackCallable(const Model::UpdateCertificateRecordRollbackRequest& request);

                /**
                 *This API is used to upload a certificate.
                 * @param req UploadCertificateRequest
                 * @return UploadCertificateOutcome
                 */
                UploadCertificateOutcome UploadCertificate(const Model::UploadCertificateRequest &request);
                void UploadCertificateAsync(const Model::UploadCertificateRequest& request, const UploadCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UploadCertificateOutcomeCallable UploadCertificateCallable(const Model::UploadCertificateRequest& request);

                /**
                 *This API is used to upload the confirmation letter for a certificate.
                 * @param req UploadConfirmLetterRequest
                 * @return UploadConfirmLetterOutcome
                 */
                UploadConfirmLetterOutcome UploadConfirmLetter(const Model::UploadConfirmLetterRequest &request);
                void UploadConfirmLetterAsync(const Model::UploadConfirmLetterRequest& request, const UploadConfirmLetterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UploadConfirmLetterOutcomeCallable UploadConfirmLetterCallable(const Model::UploadConfirmLetterRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_SSLCLIENT_H_
