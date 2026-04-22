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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_CONFIGUREMNGPREVIEWREQUEST_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_CONFIGUREMNGPREVIEWREQUEST_H_

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
                * ConfigureMNGPreview request structure.
                */
                class ConfigureMNGPreviewRequest : public AbstractModel
                {
                public:
                    ConfigureMNGPreviewRequest();
                    ~ConfigureMNGPreviewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Mini game appid</p>
                     * @return MNPId <p>Mini game appid</p>
                     * 
                     */
                    std::string GetMNPId() const;

                    /**
                     * 设置<p>Mini game appid</p>
                     * @param _mNPId <p>Mini game appid</p>
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
                     * 获取<p>1 Set 2 Cancel</p>
                     * @return ActionType <p>1 Set 2 Cancel</p>
                     * 
                     */
                    int64_t GetActionType() const;

                    /**
                     * 设置<p>1 Set 2 Cancel</p>
                     * @param _actionType <p>1 Set 2 Cancel</p>
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
                     * 获取<p>Mini game version ID</p>
                     * @return MNPVersionId <p>Mini game version ID</p>
                     * 
                     */
                    int64_t GetMNPVersionId() const;

                    /**
                     * 设置<p>Mini game version ID</p>
                     * @param _mNPVersionId <p>Mini game version ID</p>
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
                     * 获取<p>Preview path</p>
                     * @return PreviewEntrancePath <p>Preview path</p>
                     * 
                     */
                    std::string GetPreviewEntrancePath() const;

                    /**
                     * 设置<p>Preview path</p>
                     * @param _previewEntrancePath <p>Preview path</p>
                     * 
                     */
                    void SetPreviewEntrancePath(const std::string& _previewEntrancePath);

                    /**
                     * 判断参数 PreviewEntrancePath 是否已赋值
                     * @return PreviewEntrancePath 是否已赋值
                     * 
                     */
                    bool PreviewEntrancePathHasBeenSet() const;

                private:

                    /**
                     * <p>Mini game appid</p>
                     */
                    std::string m_mNPId;
                    bool m_mNPIdHasBeenSet;

                    /**
                     * <p>1 Set 2 Cancel</p>
                     */
                    int64_t m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * <p>Mini game version ID</p>
                     */
                    int64_t m_mNPVersionId;
                    bool m_mNPVersionIdHasBeenSet;

                    /**
                     * <p>Platform ID</p>
                     */
                    std::string m_platformId;
                    bool m_platformIdHasBeenSet;

                    /**
                     * <p>Preview path</p>
                     */
                    std::string m_previewEntrancePath;
                    bool m_previewEntrancePathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_CONFIGUREMNGPREVIEWREQUEST_H_
