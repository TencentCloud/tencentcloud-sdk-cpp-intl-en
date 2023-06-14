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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_SETVIDEOGENERATIONTASKCALLBACKKEYREQUEST_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_SETVIDEOGENERATIONTASKCALLBACKKEYREQUEST_H_

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
                * SetVideoGenerationTaskCallbackKey request structure.
                */
                class SetVideoGenerationTaskCallbackKeyRequest : public AbstractModel
                {
                public:
                    SetVideoGenerationTaskCallbackKeyRequest();
                    ~SetVideoGenerationTaskCallbackKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取SdkAppId of the whiteboard application.
                     * @return SdkAppId SdkAppId of the whiteboard application.
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置SdkAppId of the whiteboard application.
                     * @param _sdkAppId SdkAppId of the whiteboard application.
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取Callback authentication key for recording video generation. It is a string that can have up to 64 characters. If an empty string is passed in, the existing callback authentication key is deleted.
                     * @return CallbackKey Callback authentication key for recording video generation. It is a string that can have up to 64 characters. If an empty string is passed in, the existing callback authentication key is deleted.
                     * 
                     */
                    std::string GetCallbackKey() const;

                    /**
                     * 设置Callback authentication key for recording video generation. It is a string that can have up to 64 characters. If an empty string is passed in, the existing callback authentication key is deleted.
                     * @param _callbackKey Callback authentication key for recording video generation. It is a string that can have up to 64 characters. If an empty string is passed in, the existing callback authentication key is deleted.
                     * 
                     */
                    void SetCallbackKey(const std::string& _callbackKey);

                    /**
                     * 判断参数 CallbackKey 是否已赋值
                     * @return CallbackKey 是否已赋值
                     * 
                     */
                    bool CallbackKeyHasBeenSet() const;

                private:

                    /**
                     * SdkAppId of the whiteboard application.
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Callback authentication key for recording video generation. It is a string that can have up to 64 characters. If an empty string is passed in, the existing callback authentication key is deleted.
                     */
                    std::string m_callbackKey;
                    bool m_callbackKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_SETVIDEOGENERATIONTASKCALLBACKKEYREQUEST_H_
