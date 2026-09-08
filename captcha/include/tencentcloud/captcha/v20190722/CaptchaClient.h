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

#ifndef TENCENTCLOUD_CAPTCHA_V20190722_CAPTCHACLIENT_H_
#define TENCENTCLOUD_CAPTCHA_V20190722_CAPTCHACLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/captcha/v20190722/model/CreateCaptchaInfoInternationalRequest.h>
#include <tencentcloud/captcha/v20190722/model/CreateCaptchaInfoInternationalResponse.h>
#include <tencentcloud/captcha/v20190722/model/CreateIpWhiteListInternationalRequest.h>
#include <tencentcloud/captcha/v20190722/model/CreateIpWhiteListInternationalResponse.h>
#include <tencentcloud/captcha/v20190722/model/DeleteIpWhiteListInternationalRequest.h>
#include <tencentcloud/captcha/v20190722/model/DeleteIpWhiteListInternationalResponse.h>
#include <tencentcloud/captcha/v20190722/model/DescribeCaptchaInfoListInternationalRequest.h>
#include <tencentcloud/captcha/v20190722/model/DescribeCaptchaInfoListInternationalResponse.h>
#include <tencentcloud/captcha/v20190722/model/DescribeCaptchaResultRequest.h>
#include <tencentcloud/captcha/v20190722/model/DescribeCaptchaResultResponse.h>
#include <tencentcloud/captcha/v20190722/model/DescribeIpWhiteListInternationalRequest.h>
#include <tencentcloud/captcha/v20190722/model/DescribeIpWhiteListInternationalResponse.h>
#include <tencentcloud/captcha/v20190722/model/ModifyCaptchaInfoInternationalRequest.h>
#include <tencentcloud/captcha/v20190722/model/ModifyCaptchaInfoInternationalResponse.h>
#include <tencentcloud/captcha/v20190722/model/ModifyIpWhiteListInternationalRequest.h>
#include <tencentcloud/captcha/v20190722/model/ModifyIpWhiteListInternationalResponse.h>
#include <tencentcloud/captcha/v20190722/model/RemoveCaptchaInfoInternationalRequest.h>
#include <tencentcloud/captcha/v20190722/model/RemoveCaptchaInfoInternationalResponse.h>


namespace TencentCloud
{
    namespace Captcha
    {
        namespace V20190722
        {
            class CaptchaClient : public AbstractClient
            {
            public:
                CaptchaClient(const Credential &credential, const std::string &region);
                CaptchaClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateCaptchaInfoInternationalResponse> CreateCaptchaInfoInternationalOutcome;
                typedef std::future<CreateCaptchaInfoInternationalOutcome> CreateCaptchaInfoInternationalOutcomeCallable;
                typedef std::function<void(const CaptchaClient*, const Model::CreateCaptchaInfoInternationalRequest&, CreateCaptchaInfoInternationalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCaptchaInfoInternationalAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateIpWhiteListInternationalResponse> CreateIpWhiteListInternationalOutcome;
                typedef std::future<CreateIpWhiteListInternationalOutcome> CreateIpWhiteListInternationalOutcomeCallable;
                typedef std::function<void(const CaptchaClient*, const Model::CreateIpWhiteListInternationalRequest&, CreateIpWhiteListInternationalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateIpWhiteListInternationalAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteIpWhiteListInternationalResponse> DeleteIpWhiteListInternationalOutcome;
                typedef std::future<DeleteIpWhiteListInternationalOutcome> DeleteIpWhiteListInternationalOutcomeCallable;
                typedef std::function<void(const CaptchaClient*, const Model::DeleteIpWhiteListInternationalRequest&, DeleteIpWhiteListInternationalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIpWhiteListInternationalAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCaptchaInfoListInternationalResponse> DescribeCaptchaInfoListInternationalOutcome;
                typedef std::future<DescribeCaptchaInfoListInternationalOutcome> DescribeCaptchaInfoListInternationalOutcomeCallable;
                typedef std::function<void(const CaptchaClient*, const Model::DescribeCaptchaInfoListInternationalRequest&, DescribeCaptchaInfoListInternationalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCaptchaInfoListInternationalAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCaptchaResultResponse> DescribeCaptchaResultOutcome;
                typedef std::future<DescribeCaptchaResultOutcome> DescribeCaptchaResultOutcomeCallable;
                typedef std::function<void(const CaptchaClient*, const Model::DescribeCaptchaResultRequest&, DescribeCaptchaResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCaptchaResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIpWhiteListInternationalResponse> DescribeIpWhiteListInternationalOutcome;
                typedef std::future<DescribeIpWhiteListInternationalOutcome> DescribeIpWhiteListInternationalOutcomeCallable;
                typedef std::function<void(const CaptchaClient*, const Model::DescribeIpWhiteListInternationalRequest&, DescribeIpWhiteListInternationalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIpWhiteListInternationalAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCaptchaInfoInternationalResponse> ModifyCaptchaInfoInternationalOutcome;
                typedef std::future<ModifyCaptchaInfoInternationalOutcome> ModifyCaptchaInfoInternationalOutcomeCallable;
                typedef std::function<void(const CaptchaClient*, const Model::ModifyCaptchaInfoInternationalRequest&, ModifyCaptchaInfoInternationalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCaptchaInfoInternationalAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyIpWhiteListInternationalResponse> ModifyIpWhiteListInternationalOutcome;
                typedef std::future<ModifyIpWhiteListInternationalOutcome> ModifyIpWhiteListInternationalOutcomeCallable;
                typedef std::function<void(const CaptchaClient*, const Model::ModifyIpWhiteListInternationalRequest&, ModifyIpWhiteListInternationalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIpWhiteListInternationalAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveCaptchaInfoInternationalResponse> RemoveCaptchaInfoInternationalOutcome;
                typedef std::future<RemoveCaptchaInfoInternationalOutcome> RemoveCaptchaInfoInternationalOutcomeCallable;
                typedef std::function<void(const CaptchaClient*, const Model::RemoveCaptchaInfoInternationalRequest&, RemoveCaptchaInfoInternationalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveCaptchaInfoInternationalAsyncHandler;



                /**
                 *Create a captcha: You can create multiple Captcha based on different business needs. Each verification has different client types and security policies. The limit for new Captcha is 50.
                 * @param req CreateCaptchaInfoInternationalRequest
                 * @return CreateCaptchaInfoInternationalOutcome
                 */
                CreateCaptchaInfoInternationalOutcome CreateCaptchaInfoInternational(const Model::CreateCaptchaInfoInternationalRequest &request);
                void CreateCaptchaInfoInternationalAsync(const Model::CreateCaptchaInfoInternationalRequest& request, const CreateCaptchaInfoInternationalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCaptchaInfoInternationalOutcomeCallable CreateCaptchaInfoInternationalCallable(const Model::CreateCaptchaInfoInternationalRequest& request);

                /**
                 *Create an IP allowlist: You can create an IP allowlist based on different business needs.
                 * @param req CreateIpWhiteListInternationalRequest
                 * @return CreateIpWhiteListInternationalOutcome
                 */
                CreateIpWhiteListInternationalOutcome CreateIpWhiteListInternational(const Model::CreateIpWhiteListInternationalRequest &request);
                void CreateIpWhiteListInternationalAsync(const Model::CreateIpWhiteListInternationalRequest& request, const CreateIpWhiteListInternationalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateIpWhiteListInternationalOutcomeCallable CreateIpWhiteListInternationalCallable(const Model::CreateIpWhiteListInternationalRequest& request);

                /**
                 *Delete an IP allowlist: You can delete an IP allowlist based on different business needs.
                 * @param req DeleteIpWhiteListInternationalRequest
                 * @return DeleteIpWhiteListInternationalOutcome
                 */
                DeleteIpWhiteListInternationalOutcome DeleteIpWhiteListInternational(const Model::DeleteIpWhiteListInternationalRequest &request);
                void DeleteIpWhiteListInternationalAsync(const Model::DeleteIpWhiteListInternationalRequest& request, const DeleteIpWhiteListInternationalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteIpWhiteListInternationalOutcomeCallable DeleteIpWhiteListInternationalCallable(const Model::DeleteIpWhiteListInternationalRequest& request);

                /**
                 *Query the Captcha list to obtain all verification CaptchaAppIds, verification names, and other information internationally.
                 * @param req DescribeCaptchaInfoListInternationalRequest
                 * @return DescribeCaptchaInfoListInternationalOutcome
                 */
                DescribeCaptchaInfoListInternationalOutcome DescribeCaptchaInfoListInternational(const Model::DescribeCaptchaInfoListInternationalRequest &request);
                void DescribeCaptchaInfoListInternationalAsync(const Model::DescribeCaptchaInfoListInternationalRequest& request, const DescribeCaptchaInfoListInternationalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCaptchaInfoListInternationalOutcomeCallable DescribeCaptchaInfoListInternationalCallable(const Model::DescribeCaptchaInfoListInternationalRequest& request);

                /**
                 *This API is used to query the result of CAPTCHA ticket verification (web and app).
                 * @param req DescribeCaptchaResultRequest
                 * @return DescribeCaptchaResultOutcome
                 */
                DescribeCaptchaResultOutcome DescribeCaptchaResult(const Model::DescribeCaptchaResultRequest &request);
                void DescribeCaptchaResultAsync(const Model::DescribeCaptchaResultRequest& request, const DescribeCaptchaResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCaptchaResultOutcomeCallable DescribeCaptchaResultCallable(const Model::DescribeCaptchaResultRequest& request);

                /**
                 *IP allowlist list: You can query the IP whitelist list based on different business needs.
                 * @param req DescribeIpWhiteListInternationalRequest
                 * @return DescribeIpWhiteListInternationalOutcome
                 */
                DescribeIpWhiteListInternationalOutcome DescribeIpWhiteListInternational(const Model::DescribeIpWhiteListInternationalRequest &request);
                void DescribeIpWhiteListInternationalAsync(const Model::DescribeIpWhiteListInternationalRequest& request, const DescribeIpWhiteListInternationalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIpWhiteListInternationalOutcomeCallable DescribeIpWhiteListInternationalCallable(const Model::DescribeIpWhiteListInternationalRequest& request);

                /**
                 *Change the captcha configuration, including basic, appearance, and security settings such as captcha name, prompt language, and validation type.
                 * @param req ModifyCaptchaInfoInternationalRequest
                 * @return ModifyCaptchaInfoInternationalOutcome
                 */
                ModifyCaptchaInfoInternationalOutcome ModifyCaptchaInfoInternational(const Model::ModifyCaptchaInfoInternationalRequest &request);
                void ModifyCaptchaInfoInternationalAsync(const Model::ModifyCaptchaInfoInternationalRequest& request, const ModifyCaptchaInfoInternationalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCaptchaInfoInternationalOutcomeCallable ModifyCaptchaInfoInternationalCallable(const Model::ModifyCaptchaInfoInternationalRequest& request);

                /**
                 *Edit IP allowlist: You can edit the IP allowlist based on different business needs.
                 * @param req ModifyIpWhiteListInternationalRequest
                 * @return ModifyIpWhiteListInternationalOutcome
                 */
                ModifyIpWhiteListInternationalOutcome ModifyIpWhiteListInternational(const Model::ModifyIpWhiteListInternationalRequest &request);
                void ModifyIpWhiteListInternationalAsync(const Model::ModifyIpWhiteListInternationalRequest& request, const ModifyIpWhiteListInternationalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyIpWhiteListInternationalOutcomeCallable ModifyIpWhiteListInternationalCallable(const Model::ModifyIpWhiteListInternationalRequest& request);

                /**
                 *Delete a captcha: once deleted, verification scenarios using this CaptchaAppId will fail to load the verification code on the frontend, and invoice verification will report an error on the backend. Proceed with caution.
                 * @param req RemoveCaptchaInfoInternationalRequest
                 * @return RemoveCaptchaInfoInternationalOutcome
                 */
                RemoveCaptchaInfoInternationalOutcome RemoveCaptchaInfoInternational(const Model::RemoveCaptchaInfoInternationalRequest &request);
                void RemoveCaptchaInfoInternationalAsync(const Model::RemoveCaptchaInfoInternationalRequest& request, const RemoveCaptchaInfoInternationalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveCaptchaInfoInternationalOutcomeCallable RemoveCaptchaInfoInternationalCallable(const Model::RemoveCaptchaInfoInternationalRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CAPTCHA_V20190722_CAPTCHACLIENT_H_
