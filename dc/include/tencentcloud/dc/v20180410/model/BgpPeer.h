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

#ifndef TENCENTCLOUD_DC_V20180410_MODEL_BGPPEER_H_
#define TENCENTCLOUD_DC_V20180410_MODEL_BGPPEER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dc
    {
        namespace V20180410
        {
            namespace Model
            {
                /**
                * BGP parameter, including Asn and AuthKey.
                */
                class BgpPeer : public AbstractModel
                {
                public:
                    BgpPeer();
                    ~BgpPeer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取User-side BGP Asn.
                     * @return Asn User-side BGP Asn.
                     * 
                     */
                    int64_t GetAsn() const;

                    /**
                     * 设置User-side BGP Asn.
                     * @param _asn User-side BGP Asn.
                     * 
                     */
                    void SetAsn(const int64_t& _asn);

                    /**
                     * 判断参数 Asn 是否已赋值
                     * @return Asn 是否已赋值
                     * 
                     */
                    bool AsnHasBeenSet() const;

                    /**
                     * 获取User-side BGP key.
                     * @return AuthKey User-side BGP key.
                     * 
                     */
                    std::string GetAuthKey() const;

                    /**
                     * 设置User-side BGP key.
                     * @param _authKey User-side BGP key.
                     * 
                     */
                    void SetAuthKey(const std::string& _authKey);

                    /**
                     * 判断参数 AuthKey 是否已赋值
                     * @return AuthKey 是否已赋值
                     * 
                     */
                    bool AuthKeyHasBeenSet() const;

                private:

                    /**
                     * User-side BGP Asn.
                     */
                    int64_t m_asn;
                    bool m_asnHasBeenSet;

                    /**
                     * User-side BGP key.
                     */
                    std::string m_authKey;
                    bool m_authKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_MODEL_BGPPEER_H_
