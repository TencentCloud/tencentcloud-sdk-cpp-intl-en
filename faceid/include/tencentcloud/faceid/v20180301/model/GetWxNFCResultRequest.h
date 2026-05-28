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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_GETWXNFCRESULTREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_GETWXNFCRESULTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * GetWxNFCResult request structure.
                */
                class GetWxNFCResultRequest : public AbstractModel
                {
                public:
                    GetWxNFCResultRequest();
                    ~GetWxNFCResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Unique identifier ID returned by the frontend NFC SDK</p>
                     * @return NFCToken <p>Unique identifier ID returned by the frontend NFC SDK</p>
                     * 
                     */
                    std::string GetNFCToken() const;

                    /**
                     * 设置<p>Unique identifier ID returned by the frontend NFC SDK</p>
                     * @param _nFCToken <p>Unique identifier ID returned by the frontend NFC SDK</p>
                     * 
                     */
                    void SetNFCToken(const std::string& _nFCToken);

                    /**
                     * 判断参数 NFCToken 是否已赋值
                     * @return NFCToken 是否已赋值
                     * 
                     */
                    bool NFCTokenHasBeenSet() const;

                private:

                    /**
                     * <p>Unique identifier ID returned by the frontend NFC SDK</p>
                     */
                    std::string m_nFCToken;
                    bool m_nFCTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GETWXNFCRESULTREQUEST_H_
