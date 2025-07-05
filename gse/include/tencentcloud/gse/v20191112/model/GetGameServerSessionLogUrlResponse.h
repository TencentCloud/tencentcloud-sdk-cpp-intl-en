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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_GETGAMESERVERSESSIONLOGURLRESPONSE_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_GETGAMESERVERSESSIONLOGURLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * GetGameServerSessionLogUrl response structure.
                */
                class GetGameServerSessionLogUrlResponse : public AbstractModel
                {
                public:
                    GetGameServerSessionLogUrlResponse();
                    ~GetGameServerSessionLogUrlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Log download URL. It should contain 1 to 1024 ASCII characters.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return PreSignedUrl Log download URL. It should contain 1 to 1024 ASCII characters.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetPreSignedUrl() const;

                    /**
                     * 判断参数 PreSignedUrl 是否已赋值
                     * @return PreSignedUrl 是否已赋值
                     * 
                     */
                    bool PreSignedUrlHasBeenSet() const;

                private:

                    /**
                     * Log download URL. It should contain 1 to 1024 ASCII characters.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_preSignedUrl;
                    bool m_preSignedUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_GETGAMESERVERSESSIONLOGURLRESPONSE_H_
