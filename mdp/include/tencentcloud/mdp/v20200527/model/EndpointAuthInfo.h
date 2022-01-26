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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_ENDPOINTAUTHINFO_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_ENDPOINTAUTHINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdp
    {
        namespace V20200527
        {
            namespace Model
            {
                /**
                * The authentication information of channel endpoints.
                */
                class EndpointAuthInfo : public AbstractModel
                {
                public:
                    EndpointAuthInfo();
                    ~EndpointAuthInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The security group allowlist in CIDR format.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return WhiteIpList The security group allowlist in CIDR format.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetWhiteIpList() const;

                    /**
                     * 设置The security group allowlist in CIDR format.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param WhiteIpList The security group allowlist in CIDR format.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetWhiteIpList(const std::vector<std::string>& _whiteIpList);

                    /**
                     * 判断参数 WhiteIpList 是否已赋值
                     * @return WhiteIpList 是否已赋值
                     */
                    bool WhiteIpListHasBeenSet() const;

                    /**
                     * 获取The security group blocklist in CIDR format.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return BlackIpList The security group blocklist in CIDR format.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetBlackIpList() const;

                    /**
                     * 设置The security group blocklist in CIDR format.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param BlackIpList The security group blocklist in CIDR format.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetBlackIpList(const std::vector<std::string>& _blackIpList);

                    /**
                     * 判断参数 BlackIpList 是否已赋值
                     * @return BlackIpList 是否已赋值
                     */
                    bool BlackIpListHasBeenSet() const;

                    /**
                     * 获取The authentication key. Its value is same as `X-TENCENT-PACKAGE` set in the HTTP request header.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AuthKey The authentication key. Its value is same as `X-TENCENT-PACKAGE` set in the HTTP request header.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetAuthKey() const;

                    /**
                     * 设置The authentication key. Its value is same as `X-TENCENT-PACKAGE` set in the HTTP request header.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param AuthKey The authentication key. Its value is same as `X-TENCENT-PACKAGE` set in the HTTP request header.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAuthKey(const std::string& _authKey);

                    /**
                     * 判断参数 AuthKey 是否已赋值
                     * @return AuthKey 是否已赋值
                     */
                    bool AuthKeyHasBeenSet() const;

                private:

                    /**
                     * The security group allowlist in CIDR format.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_whiteIpList;
                    bool m_whiteIpListHasBeenSet;

                    /**
                     * The security group blocklist in CIDR format.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_blackIpList;
                    bool m_blackIpListHasBeenSet;

                    /**
                     * The authentication key. Its value is same as `X-TENCENT-PACKAGE` set in the HTTP request header.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_authKey;
                    bool m_authKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_ENDPOINTAUTHINFO_H_
