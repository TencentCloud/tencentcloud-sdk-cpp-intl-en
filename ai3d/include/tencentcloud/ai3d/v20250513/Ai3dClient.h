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

#ifndef TENCENTCLOUD_AI3D_V20250513_AI3DCLIENT_H_
#define TENCENTCLOUD_AI3D_V20250513_AI3DCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ai3d/v20250513/model/QueryHunyuanTo3DProJobRequest.h>
#include <tencentcloud/ai3d/v20250513/model/QueryHunyuanTo3DProJobResponse.h>
#include <tencentcloud/ai3d/v20250513/model/SubmitHunyuanTo3DProJobRequest.h>
#include <tencentcloud/ai3d/v20250513/model/SubmitHunyuanTo3DProJobResponse.h>


namespace TencentCloud
{
    namespace Ai3d
    {
        namespace V20250513
        {
            class Ai3dClient : public AbstractClient
            {
            public:
                Ai3dClient(const Credential &credential, const std::string &region);
                Ai3dClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::QueryHunyuanTo3DProJobResponse> QueryHunyuanTo3DProJobOutcome;
                typedef std::future<QueryHunyuanTo3DProJobOutcome> QueryHunyuanTo3DProJobOutcomeCallable;
                typedef std::function<void(const Ai3dClient*, const Model::QueryHunyuanTo3DProJobRequest&, QueryHunyuanTo3DProJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryHunyuanTo3DProJobAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitHunyuanTo3DProJobResponse> SubmitHunyuanTo3DProJobOutcome;
                typedef std::future<SubmitHunyuanTo3DProJobOutcome> SubmitHunyuanTo3DProJobOutcomeCallable;
                typedef std::function<void(const Ai3dClient*, const Model::SubmitHunyuanTo3DProJobRequest&, SubmitHunyuanTo3DProJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitHunyuanTo3DProJobAsyncHandler;



                /**
                 *This API is used to intelligently generate 3D content based on the HunYuan Large Model and input text descriptions/images.
This API is used to provide 3 concurrent tasks by default, which can be processed simultaneously. The next task can be processed only after the previous task is completed.
                 * @param req QueryHunyuanTo3DProJobRequest
                 * @return QueryHunyuanTo3DProJobOutcome
                 */
                QueryHunyuanTo3DProJobOutcome QueryHunyuanTo3DProJob(const Model::QueryHunyuanTo3DProJobRequest &request);
                void QueryHunyuanTo3DProJobAsync(const Model::QueryHunyuanTo3DProJobRequest& request, const QueryHunyuanTo3DProJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryHunyuanTo3DProJobOutcomeCallable QueryHunyuanTo3DProJobCallable(const Model::QueryHunyuanTo3DProJobRequest& request);

                /**
                 *This API is used to intelligently generate 3D content based on the HunYuan Large Model and input text descriptions/images.
This API is used to provide 3 concurrent tasks by default, which can be processed simultaneously. The next task can be processed only after the previous task is completed.
                 * @param req SubmitHunyuanTo3DProJobRequest
                 * @return SubmitHunyuanTo3DProJobOutcome
                 */
                SubmitHunyuanTo3DProJobOutcome SubmitHunyuanTo3DProJob(const Model::SubmitHunyuanTo3DProJobRequest &request);
                void SubmitHunyuanTo3DProJobAsync(const Model::SubmitHunyuanTo3DProJobRequest& request, const SubmitHunyuanTo3DProJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitHunyuanTo3DProJobOutcomeCallable SubmitHunyuanTo3DProJobCallable(const Model::SubmitHunyuanTo3DProJobRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_AI3D_V20250513_AI3DCLIENT_H_
