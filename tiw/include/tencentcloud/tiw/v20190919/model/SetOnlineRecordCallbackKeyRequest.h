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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_SETONLINERECORDCALLBACKKEYREQUEST_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_SETONLINERECORDCALLBACKKEYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * SetOnlineRecordCallbackKey request structure.
                */
                class SetOnlineRecordCallbackKeyRequest : public AbstractModel
                {
                public:
                    SetOnlineRecordCallbackKeyRequest();
                    ~SetOnlineRecordCallbackKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取SdkAppId of the application
                     * @return SdkAppId SdkAppId of the application
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置SdkAppId of the application
                     * @param SdkAppId SdkAppId of the application
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取Authentication key for the real-time recording callback. It is a string that can have up to 64 characters. If an empty string is passed in, the existing callback authentication key will be deleted. For more information, please [see here](https://intl.cloud.tencent.com/document/product/1137/40257?from_cn_redirect=1).
                     * @return CallbackKey Authentication key for the real-time recording callback. It is a string that can have up to 64 characters. If an empty string is passed in, the existing callback authentication key will be deleted. For more information, please [see here](https://intl.cloud.tencent.com/document/product/1137/40257?from_cn_redirect=1).
                     */
                    std::string GetCallbackKey() const;

                    /**
                     * 设置Authentication key for the real-time recording callback. It is a string that can have up to 64 characters. If an empty string is passed in, the existing callback authentication key will be deleted. For more information, please [see here](https://intl.cloud.tencent.com/document/product/1137/40257?from_cn_redirect=1).
                     * @param CallbackKey Authentication key for the real-time recording callback. It is a string that can have up to 64 characters. If an empty string is passed in, the existing callback authentication key will be deleted. For more information, please [see here](https://intl.cloud.tencent.com/document/product/1137/40257?from_cn_redirect=1).
                     */
                    void SetCallbackKey(const std::string& _callbackKey);

                    /**
                     * 判断参数 CallbackKey 是否已赋值
                     * @return CallbackKey 是否已赋值
                     */
                    bool CallbackKeyHasBeenSet() const;

                private:

                    /**
                     * SdkAppId of the application
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Authentication key for the real-time recording callback. It is a string that can have up to 64 characters. If an empty string is passed in, the existing callback authentication key will be deleted. For more information, please [see here](https://intl.cloud.tencent.com/document/product/1137/40257?from_cn_redirect=1).
                     */
                    std::string m_callbackKey;
                    bool m_callbackKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_SETONLINERECORDCALLBACKKEYREQUEST_H_
