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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_CREATEPOLICYVERSIONRESPONSE_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_CREATEPOLICYVERSIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * CreatePolicyVersion response structure.
                */
                class CreatePolicyVersionResponse : public AbstractModel
                {
                public:
                    CreatePolicyVersionResponse();
                    ~CreatePolicyVersionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Policy version ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return VersionId Policy version ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetVersionId() const;

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     * 
                     */
                    bool VersionIdHasBeenSet() const;

                private:

                    /**
                     * Policy version ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_versionId;
                    bool m_versionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_CREATEPOLICYVERSIONRESPONSE_H_
