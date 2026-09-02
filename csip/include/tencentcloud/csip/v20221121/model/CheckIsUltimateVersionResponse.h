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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CHECKISULTIMATEVERSIONRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CHECKISULTIMATEVERSIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CheckIsUltimateVersion response structure.
                */
                class CheckIsUltimateVersionResponse : public AbstractModel
                {
                public:
                    CheckIsUltimateVersionResponse();
                    ~CheckIsUltimateVersionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Flagship edition user or not</p>
                     * @return IsUltimateVersion <p>Flagship edition user or not</p>
                     * 
                     */
                    bool GetIsUltimateVersion() const;

                    /**
                     * 判断参数 IsUltimateVersion 是否已赋值
                     * @return IsUltimateVersion 是否已赋值
                     * 
                     */
                    bool IsUltimateVersionHasBeenSet() const;

                    /**
                     * 获取<p>Whether the user is a new version flagship edition user</p>
                     * @return IsNewUltimateVersion <p>Whether the user is a new version flagship edition user</p>
                     * 
                     */
                    bool GetIsNewUltimateVersion() const;

                    /**
                     * 判断参数 IsNewUltimateVersion 是否已赋值
                     * @return IsNewUltimateVersion 是否已赋值
                     * 
                     */
                    bool IsNewUltimateVersionHasBeenSet() const;

                private:

                    /**
                     * <p>Flagship edition user or not</p>
                     */
                    bool m_isUltimateVersion;
                    bool m_isUltimateVersionHasBeenSet;

                    /**
                     * <p>Whether the user is a new version flagship edition user</p>
                     */
                    bool m_isNewUltimateVersion;
                    bool m_isNewUltimateVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CHECKISULTIMATEVERSIONRESPONSE_H_
