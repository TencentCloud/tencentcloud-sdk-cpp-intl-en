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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_COMMONNAME_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_COMMONNAME_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * The CommonName in the certificate of the client corresponding to the user UIN
                */
                class CommonName : public AbstractModel
                {
                public:
                    CommonName();
                    ~CommonName() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取User UIN
                     * @return SubaccountUin User UIN
                     */
                    std::string GetSubaccountUin() const;

                    /**
                     * 设置User UIN
                     * @param SubaccountUin User UIN
                     */
                    void SetSubaccountUin(const std::string& _subaccountUin);

                    /**
                     * 判断参数 SubaccountUin 是否已赋值
                     * @return SubaccountUin 是否已赋值
                     */
                    bool SubaccountUinHasBeenSet() const;

                    /**
                     * 获取The CommonName in the certificate of the client corresponding to the sub-account
                     * @return CN The CommonName in the certificate of the client corresponding to the sub-account
                     */
                    std::string GetCN() const;

                    /**
                     * 设置The CommonName in the certificate of the client corresponding to the sub-account
                     * @param CN The CommonName in the certificate of the client corresponding to the sub-account
                     */
                    void SetCN(const std::string& _cN);

                    /**
                     * 判断参数 CN 是否已赋值
                     * @return CN 是否已赋值
                     */
                    bool CNHasBeenSet() const;

                private:

                    /**
                     * User UIN
                     */
                    std::string m_subaccountUin;
                    bool m_subaccountUinHasBeenSet;

                    /**
                     * The CommonName in the certificate of the client corresponding to the sub-account
                     */
                    std::string m_cN;
                    bool m_cNHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_COMMONNAME_H_
