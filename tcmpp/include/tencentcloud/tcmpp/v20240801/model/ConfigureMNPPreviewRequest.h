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

#ifndef TENCENTCLOUD_TCMPP_V20240801_MODEL_CONFIGUREMNPPREVIEWREQUEST_H_
#define TENCENTCLOUD_TCMPP_V20240801_MODEL_CONFIGUREMNPPREVIEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcmpp
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * ConfigureMNPPreview request structure.
                */
                class ConfigureMNPPreviewRequest : public AbstractModel
                {
                public:
                    ConfigureMNPPreviewRequest();
                    ~ConfigureMNPPreviewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Mini program ID
                     * @return MNPId Mini program ID
                     * 
                     */
                    std::string GetMNPId() const;

                    /**
                     * 设置Mini program ID
                     * @param _mNPId Mini program ID
                     * 
                     */
                    void SetMNPId(const std::string& _mNPId);

                    /**
                     * 判断参数 MNPId 是否已赋值
                     * @return MNPId 是否已赋值
                     * 
                     */
                    bool MNPIdHasBeenSet() const;

                    /**
                     * 获取1: Set; 2: Cancel
                     * @return ActionType 1: Set; 2: Cancel
                     * 
                     */
                    int64_t GetActionType() const;

                    /**
                     * 设置1: Set; 2: Cancel
                     * @param _actionType 1: Set; 2: Cancel
                     * 
                     */
                    void SetActionType(const int64_t& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取Mini program version ID
                     * @return MNPVersionId Mini program version ID
                     * 
                     */
                    int64_t GetMNPVersionId() const;

                    /**
                     * 设置Mini program version ID
                     * @param _mNPVersionId Mini program version ID
                     * 
                     */
                    void SetMNPVersionId(const int64_t& _mNPVersionId);

                    /**
                     * 判断参数 MNPVersionId 是否已赋值
                     * @return MNPVersionId 是否已赋值
                     * 
                     */
                    bool MNPVersionIdHasBeenSet() const;

                    /**
                     * 获取Platform ID
                     * @return PlatformId Platform ID
                     * 
                     */
                    std::string GetPlatformId() const;

                    /**
                     * 设置Platform ID
                     * @param _platformId Platform ID
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
                     * 获取Path to the preview page
                     * @return PreivewEntrancePath Path to the preview page
                     * 
                     */
                    std::string GetPreivewEntrancePath() const;

                    /**
                     * 设置Path to the preview page
                     * @param _preivewEntrancePath Path to the preview page
                     * 
                     */
                    void SetPreivewEntrancePath(const std::string& _preivewEntrancePath);

                    /**
                     * 判断参数 PreivewEntrancePath 是否已赋值
                     * @return PreivewEntrancePath 是否已赋值
                     * 
                     */
                    bool PreivewEntrancePathHasBeenSet() const;

                private:

                    /**
                     * Mini program ID
                     */
                    std::string m_mNPId;
                    bool m_mNPIdHasBeenSet;

                    /**
                     * 1: Set; 2: Cancel
                     */
                    int64_t m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * Mini program version ID
                     */
                    int64_t m_mNPVersionId;
                    bool m_mNPVersionIdHasBeenSet;

                    /**
                     * Platform ID
                     */
                    std::string m_platformId;
                    bool m_platformIdHasBeenSet;

                    /**
                     * Path to the preview page
                     */
                    std::string m_preivewEntrancePath;
                    bool m_preivewEntrancePathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCMPP_V20240801_MODEL_CONFIGUREMNPPREVIEWREQUEST_H_
