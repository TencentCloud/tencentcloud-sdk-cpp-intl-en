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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_MODIFYAPPREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_MODIFYAPPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * ModifyApp request structure.
                */
                class ModifyAppRequest : public AbstractModel
                {
                public:
                    ModifyAppRequest();
                    ~ModifyAppRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取LCIC SdkAppId
                     * @return SdkAppId LCIC SdkAppId
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置LCIC SdkAppId
                     * @param _sdkAppId LCIC SdkAppId
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取Callback URL. Currently, only port 80 and port 443 are supported.
                     * @return Callback Callback URL. Currently, only port 80 and port 443 are supported.
                     * 
                     */
                    std::string GetCallback() const;

                    /**
                     * 设置Callback URL. Currently, only port 80 and port 443 are supported.
                     * @param _callback Callback URL. Currently, only port 80 and port 443 are supported.
                     * 
                     */
                    void SetCallback(const std::string& _callback);

                    /**
                     * 判断参数 Callback 是否已赋值
                     * @return Callback 是否已赋值
                     * 
                     */
                    bool CallbackHasBeenSet() const;

                    /**
                     * 获取The callback key.
                     * @return CallbackKey The callback key.
                     * 
                     */
                    std::string GetCallbackKey() const;

                    /**
                     * 设置The callback key.
                     * @param _callbackKey The callback key.
                     * 
                     */
                    void SetCallbackKey(const std::string& _callbackKey);

                    /**
                     * 判断参数 CallbackKey 是否已赋值
                     * @return CallbackKey 是否已赋值
                     * 
                     */
                    bool CallbackKeyHasBeenSet() const;

                    /**
                     * 获取Transfer Id
                     * @return TransferId Transfer Id
                     * 
                     */
                    std::string GetTransferId() const;

                    /**
                     * 设置Transfer Id
                     * @param _transferId Transfer Id
                     * 
                     */
                    void SetTransferId(const std::string& _transferId);

                    /**
                     * 判断参数 TransferId 是否已赋值
                     * @return TransferId 是否已赋值
                     * 
                     */
                    bool TransferIdHasBeenSet() const;

                    /**
                     * 获取Transfer Url
                     * @return TransferUrl Transfer Url
                     * 
                     */
                    std::string GetTransferUrl() const;

                    /**
                     * 设置Transfer Url
                     * @param _transferUrl Transfer Url
                     * 
                     */
                    void SetTransferUrl(const std::string& _transferUrl);

                    /**
                     * 判断参数 TransferUrl 是否已赋值
                     * @return TransferUrl 是否已赋值
                     * 
                     */
                    bool TransferUrlHasBeenSet() const;

                private:

                    /**
                     * LCIC SdkAppId
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Callback URL. Currently, only port 80 and port 443 are supported.
                     */
                    std::string m_callback;
                    bool m_callbackHasBeenSet;

                    /**
                     * The callback key.
                     */
                    std::string m_callbackKey;
                    bool m_callbackKeyHasBeenSet;

                    /**
                     * Transfer Id
                     */
                    std::string m_transferId;
                    bool m_transferIdHasBeenSet;

                    /**
                     * Transfer Url
                     */
                    std::string m_transferUrl;
                    bool m_transferUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_MODIFYAPPREQUEST_H_
