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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DELETECERTIFICATERESPONSE_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DELETECERTIFICATERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * DeleteCertificate response structure.
                */
                class DeleteCertificateResponse : public AbstractModel
                {
                public:
                    DeleteCertificateResponse();
                    ~DeleteCertificateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Deletion result
                     * @return DeleteResult Deletion result
                     * 
                     */
                    bool GetDeleteResult() const;

                    /**
                     * 判断参数 DeleteResult 是否已赋值
                     * @return DeleteResult 是否已赋值
                     * 
                     */
                    bool DeleteResultHasBeenSet() const;

                    /**
                     * 获取Asynchronous deletion task id.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TaskId Asynchronous deletion task id.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * Deletion result
                     */
                    bool m_deleteResult;
                    bool m_deleteResultHasBeenSet;

                    /**
                     * Asynchronous deletion task id.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DELETECERTIFICATERESPONSE_H_
