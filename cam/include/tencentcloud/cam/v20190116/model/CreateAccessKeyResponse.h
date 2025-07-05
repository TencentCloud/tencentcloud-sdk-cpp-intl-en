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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_CREATEACCESSKEYRESPONSE_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_CREATEACCESSKEYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cam/v20190116/model/AccessKeyDetail.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * CreateAccessKey response structure.
                */
                class CreateAccessKeyResponse : public AbstractModel
                {
                public:
                    CreateAccessKeyResponse();
                    ~CreateAccessKeyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Access key
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AccessKey Access key
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AccessKeyDetail GetAccessKey() const;

                    /**
                     * 判断参数 AccessKey 是否已赋值
                     * @return AccessKey 是否已赋值
                     * 
                     */
                    bool AccessKeyHasBeenSet() const;

                private:

                    /**
                     * Access key
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AccessKeyDetail m_accessKey;
                    bool m_accessKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_CREATEACCESSKEYRESPONSE_H_
