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
#include <tencentcloud/ssl/v20191205/model/CancelCertificateOrderRequest.h>
#include <tencentcloud/ssl/v20191205/model/CancelCertificateOrderResponse.h>
#include <tencentcloud/ssl/v20191205/model/CommitCertificateInformationRequest.h>
#include <tencentcloud/ssl/v20191205/model/CommitCertificateInformationResponse.h>
#include <tencentcloud/ssl/v20191205/model/DeleteCertificateRequest.h>
#include <tencentcloud/ssl/v20191205/model/DeleteCertificateResponse.h>
#include <tencentcloud/ssl/v20191205/model/DescribeCertificateRequest.h>
#include <tencentcloud/ssl/v20191205/model/DescribeCertificateResponse.h>
#include <tencentcloud/ssl/v20191205/model/DescribeCertificateDetailRequest.h>
#include <tencentcloud/ssl/v20191205/model/DescribeCertificateDetailResponse.h>
#include <tencentcloud/ssl/v20191205/model/DescribeCertificateOperateLogsRequest.h>
#include <tencentcloud/ssl/v20191205/model/DescribeCertificateOperateLogsResponse.h>
#include <tencentcloud/ssl/v20191205/model/DescribeCertificatesRequest.h>
#include <tencentcloud/ssl/v20191205/model/DescribeCertificatesResponse.h>
#include <tencentcloud/ssl/v20191205/model/DownloadCertificateRequest.h>
#include <tencentcloud/ssl/v20191205/model/DownloadCertificateResponse.h>
#include <tencentcloud/ssl/v20191205/model/ModifyCertificateAliasRequest.h>
#include <tencentcloud/ssl/v20191205/model/ModifyCertificateAliasResponse.h>
#include <tencentcloud/ssl/v20191205/model/ModifyCertificateProjectRequest.h>
#include <tencentcloud/ssl/v20191205/model/ModifyCertificateProjectResponse.h>
#include <tencentcloud/ssl/v20191205/model/ReplaceCertificateRequest.h>
#include <tencentcloud/ssl/v20191205/model/ReplaceCertificateResponse.h>
#include <tencentcloud/ssl/v20191205/model/SubmitCertificateInformationRequest.h>
#include <tencentcloud/ssl/v20191205/model/SubmitCertificateInformationResponse.h>
#include <tencentcloud/ssl/v20191205/model/UploadCertificateRequest.h>
#include <tencentcloud/ssl/v20191205/model/UploadCertificateResponse.h>


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

                typedef Outcome<Error, Model::ApplyCertificateResponse> ApplyCertificateOutcome;
                typedef std::future<ApplyCertificateOutcome> ApplyCertificateOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::ApplyCertificateRequest&, ApplyCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplyCertificateAsyncHandler;
                typedef Outcome<Error, Model::CancelCertificateOrderResponse> CancelCertificateOrderOutcome;
                typedef std::future<CancelCertificateOrderOutcome> CancelCertificateOrderOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::CancelCertificateOrderRequest&, CancelCertificateOrderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelCertificateOrderAsyncHandler;
                typedef Outcome<Error, Model::CommitCertificateInformationResponse> CommitCertificateInformationOutcome;
                typedef std::future<CommitCertificateInformationOutcome> CommitCertificateInformationOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::CommitCertificateInformationRequest&, CommitCertificateInformationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CommitCertificateInformationAsyncHandler;
                typedef Outcome<Error, Model::DeleteCertificateResponse> DeleteCertificateOutcome;
                typedef std::future<DeleteCertificateOutcome> DeleteCertificateOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DeleteCertificateRequest&, DeleteCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCertificateAsyncHandler;
                typedef Outcome<Error, Model::DescribeCertificateResponse> DescribeCertificateOutcome;
                typedef std::future<DescribeCertificateOutcome> DescribeCertificateOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DescribeCertificateRequest&, DescribeCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCertificateAsyncHandler;
                typedef Outcome<Error, Model::DescribeCertificateDetailResponse> DescribeCertificateDetailOutcome;
                typedef std::future<DescribeCertificateDetailOutcome> DescribeCertificateDetailOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DescribeCertificateDetailRequest&, DescribeCertificateDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCertificateDetailAsyncHandler;
                typedef Outcome<Error, Model::DescribeCertificateOperateLogsResponse> DescribeCertificateOperateLogsOutcome;
                typedef std::future<DescribeCertificateOperateLogsOutcome> DescribeCertificateOperateLogsOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DescribeCertificateOperateLogsRequest&, DescribeCertificateOperateLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCertificateOperateLogsAsyncHandler;
                typedef Outcome<Error, Model::DescribeCertificatesResponse> DescribeCertificatesOutcome;
                typedef std::future<DescribeCertificatesOutcome> DescribeCertificatesOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DescribeCertificatesRequest&, DescribeCertificatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCertificatesAsyncHandler;
                typedef Outcome<Error, Model::DownloadCertificateResponse> DownloadCertificateOutcome;
                typedef std::future<DownloadCertificateOutcome> DownloadCertificateOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DownloadCertificateRequest&, DownloadCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DownloadCertificateAsyncHandler;
                typedef Outcome<Error, Model::ModifyCertificateAliasResponse> ModifyCertificateAliasOutcome;
                typedef std::future<ModifyCertificateAliasOutcome> ModifyCertificateAliasOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::ModifyCertificateAliasRequest&, ModifyCertificateAliasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCertificateAliasAsyncHandler;
                typedef Outcome<Error, Model::ModifyCertificateProjectResponse> ModifyCertificateProjectOutcome;
                typedef std::future<ModifyCertificateProjectOutcome> ModifyCertificateProjectOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::ModifyCertificateProjectRequest&, ModifyCertificateProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCertificateProjectAsyncHandler;
                typedef Outcome<Error, Model::ReplaceCertificateResponse> ReplaceCertificateOutcome;
                typedef std::future<ReplaceCertificateOutcome> ReplaceCertificateOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::ReplaceCertificateRequest&, ReplaceCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReplaceCertificateAsyncHandler;
                typedef Outcome<Error, Model::SubmitCertificateInformationResponse> SubmitCertificateInformationOutcome;
                typedef std::future<SubmitCertificateInformationOutcome> SubmitCertificateInformationOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::SubmitCertificateInformationRequest&, SubmitCertificateInformationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitCertificateInformationAsyncHandler;
                typedef Outcome<Error, Model::UploadCertificateResponse> UploadCertificateOutcome;
                typedef std::future<UploadCertificateOutcome> UploadCertificateOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::UploadCertificateRequest&, UploadCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadCertificateAsyncHandler;



                /**
                 *This API is used to apply for a free certificate.
                 * @param req ApplyCertificateRequest
                 * @return ApplyCertificateOutcome
                 */
                ApplyCertificateOutcome ApplyCertificate(const Model::ApplyCertificateRequest &request);
                void ApplyCertificateAsync(const Model::ApplyCertificateRequest& request, const ApplyCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplyCertificateOutcomeCallable ApplyCertificateCallable(const Model::ApplyCertificateRequest& request);

                /**
                 *This API is used to cancel a certificate order.
                 * @param req CancelCertificateOrderRequest
                 * @return CancelCertificateOrderOutcome
                 */
                CancelCertificateOrderOutcome CancelCertificateOrder(const Model::CancelCertificateOrderRequest &request);
                void CancelCertificateOrderAsync(const Model::CancelCertificateOrderRequest& request, const CancelCertificateOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelCertificateOrderOutcomeCallable CancelCertificateOrderCallable(const Model::CancelCertificateOrderRequest& request);

                /**
                 *This API is used to submit a certificate order.
                 * @param req CommitCertificateInformationRequest
                 * @return CommitCertificateInformationOutcome
                 */
                CommitCertificateInformationOutcome CommitCertificateInformation(const Model::CommitCertificateInformationRequest &request);
                void CommitCertificateInformationAsync(const Model::CommitCertificateInformationRequest& request, const CommitCertificateInformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CommitCertificateInformationOutcomeCallable CommitCertificateInformationCallable(const Model::CommitCertificateInformationRequest& request);

                /**
                 *This API is used to delete a certificate.
                 * @param req DeleteCertificateRequest
                 * @return DeleteCertificateOutcome
                 */
                DeleteCertificateOutcome DeleteCertificate(const Model::DeleteCertificateRequest &request);
                void DeleteCertificateAsync(const Model::DeleteCertificateRequest& request, const DeleteCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCertificateOutcomeCallable DeleteCertificateCallable(const Model::DeleteCertificateRequest& request);

                /**
                 *This API is used to obtain certificate information.
                 * @param req DescribeCertificateRequest
                 * @return DescribeCertificateOutcome
                 */
                DescribeCertificateOutcome DescribeCertificate(const Model::DescribeCertificateRequest &request);
                void DescribeCertificateAsync(const Model::DescribeCertificateRequest& request, const DescribeCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCertificateOutcomeCallable DescribeCertificateCallable(const Model::DescribeCertificateRequest& request);

                /**
                 *This API is used to obtain certificate details.
                 * @param req DescribeCertificateDetailRequest
                 * @return DescribeCertificateDetailOutcome
                 */
                DescribeCertificateDetailOutcome DescribeCertificateDetail(const Model::DescribeCertificateDetailRequest &request);
                void DescribeCertificateDetailAsync(const Model::DescribeCertificateDetailRequest& request, const DescribeCertificateDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCertificateDetailOutcomeCallable DescribeCertificateDetailCallable(const Model::DescribeCertificateDetailRequest& request);

                /**
                 *This API is used to obtain certificate operation logs in the current account.
                 * @param req DescribeCertificateOperateLogsRequest
                 * @return DescribeCertificateOperateLogsOutcome
                 */
                DescribeCertificateOperateLogsOutcome DescribeCertificateOperateLogs(const Model::DescribeCertificateOperateLogsRequest &request);
                void DescribeCertificateOperateLogsAsync(const Model::DescribeCertificateOperateLogsRequest& request, const DescribeCertificateOperateLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCertificateOperateLogsOutcomeCallable DescribeCertificateOperateLogsCallable(const Model::DescribeCertificateOperateLogsRequest& request);

                /**
                 *This API is used to obtain the certificate list.
                 * @param req DescribeCertificatesRequest
                 * @return DescribeCertificatesOutcome
                 */
                DescribeCertificatesOutcome DescribeCertificates(const Model::DescribeCertificatesRequest &request);
                void DescribeCertificatesAsync(const Model::DescribeCertificatesRequest& request, const DescribeCertificatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCertificatesOutcomeCallable DescribeCertificatesCallable(const Model::DescribeCertificatesRequest& request);

                /**
                 *This API is used to download a certificate.
                 * @param req DownloadCertificateRequest
                 * @return DownloadCertificateOutcome
                 */
                DownloadCertificateOutcome DownloadCertificate(const Model::DownloadCertificateRequest &request);
                void DownloadCertificateAsync(const Model::DownloadCertificateRequest& request, const DownloadCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DownloadCertificateOutcomeCallable DownloadCertificateCallable(const Model::DownloadCertificateRequest& request);

                /**
                 *This API is used to modify certificate alias by inputting the certificate ID and new alias.
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
                 *This API is used to reissue a certificate. Note that if you have applied for a free certificate, only an RSA-2048 certificate will be reissued, and the certificate can be reissued only once.
                 * @param req ReplaceCertificateRequest
                 * @return ReplaceCertificateOutcome
                 */
                ReplaceCertificateOutcome ReplaceCertificate(const Model::ReplaceCertificateRequest &request);
                void ReplaceCertificateAsync(const Model::ReplaceCertificateRequest& request, const ReplaceCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReplaceCertificateOutcomeCallable ReplaceCertificateCallable(const Model::ReplaceCertificateRequest& request);

                /**
                 *This API is used to submit certificate information.
                 * @param req SubmitCertificateInformationRequest
                 * @return SubmitCertificateInformationOutcome
                 */
                SubmitCertificateInformationOutcome SubmitCertificateInformation(const Model::SubmitCertificateInformationRequest &request);
                void SubmitCertificateInformationAsync(const Model::SubmitCertificateInformationRequest& request, const SubmitCertificateInformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitCertificateInformationOutcomeCallable SubmitCertificateInformationCallable(const Model::SubmitCertificateInformationRequest& request);

                /**
                 *This API is used to upload a certificate.
                 * @param req UploadCertificateRequest
                 * @return UploadCertificateOutcome
                 */
                UploadCertificateOutcome UploadCertificate(const Model::UploadCertificateRequest &request);
                void UploadCertificateAsync(const Model::UploadCertificateRequest& request, const UploadCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UploadCertificateOutcomeCallable UploadCertificateCallable(const Model::UploadCertificateRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_SSLCLIENT_H_
