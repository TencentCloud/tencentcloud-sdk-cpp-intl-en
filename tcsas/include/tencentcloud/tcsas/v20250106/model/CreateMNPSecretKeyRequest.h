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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_CREATEMNPSECRETKEYREQUEST_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_CREATEMNPSECRETKEYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * CreateMNPSecretKey request structure.
                */
                class CreateMNPSecretKeyRequest : public AbstractModel
                {
                public:
                    CreateMNPSecretKeyRequest();
                    ~CreateMNPSecretKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Platform ID</p>
                     * @return PlatformId <p>Platform ID</p>
                     * 
                     */
                    std::string GetPlatformId() const;

                    /**
                     * 设置<p>Platform ID</p>
                     * @param _platformId <p>Platform ID</p>
                     * 
                     */
                    void SetPlatformId(const std::string& _platformId);

                    /**
                     * 判断参数 PlatformId 是否已赋值
                     * @return PlatformId 是否已赋值
                     * 
                     */
                    bool PlatformIdHasBeenSet() const;

                    /**
                     * 获取<p>Mini program or mini game appid</p>
                     * @return MNPId <p>Mini program or mini game appid</p>
                     * 
                     */
                    std::string GetMNPId() const;

                    /**
                     * 设置<p>Mini program or mini game appid</p>
                     * @param _mNPId <p>Mini program or mini game appid</p>
                     * 
                     */
                    void SetMNPId(const std::string& _mNPId);

                    /**
                     * 判断参数 MNPId 是否已赋值
                     * @return MNPId 是否已赋值
                     * 
                     */
                    bool MNPIdHasBeenSet() const;

                private:

                    /**
                     * <p>Platform ID</p>
                     */
                    std::string m_platformId;
                    bool m_platformIdHasBeenSet;

                    /**
                     * <p>Mini program or mini game appid</p>
                     */
                    std::string m_mNPId;
                    bool m_mNPIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_CREATEMNPSECRETKEYREQUEST_H_
