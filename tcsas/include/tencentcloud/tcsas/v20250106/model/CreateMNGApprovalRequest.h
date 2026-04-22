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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_CREATEMNGAPPROVALREQUEST_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_CREATEMNGAPPROVALREQUEST_H_

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
                * CreateMNGApproval request structure.
                */
                class CreateMNGApprovalRequest : public AbstractModel
                {
                public:
                    CreateMNGApprovalRequest();
                    ~CreateMNGApprovalRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取<p>submit: Submit for approval; cancel: Cancel approval</p>
                     * @return ApplyAction <p>submit: Submit for approval; cancel: Cancel approval</p>
                     * 
                     */
                    std::string GetApplyAction() const;

                    /**
                     * 设置<p>submit: Submit for approval; cancel: Cancel approval</p>
                     * @param _applyAction <p>submit: Submit for approval; cancel: Cancel approval</p>
                     * 
                     */
                    void SetApplyAction(const std::string& _applyAction);

                    /**
                     * 判断参数 ApplyAction 是否已赋值
                     * @return ApplyAction 是否已赋值
                     * 
                     */
                    bool ApplyActionHasBeenSet() const;

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

                private:

                    /**
                     * <p>Mini game version ID</p>
                     */
                    int64_t m_mNPVersionId;
                    bool m_mNPVersionIdHasBeenSet;

                    /**
                     * <p>submit: Submit for approval; cancel: Cancel approval</p>
                     */
                    std::string m_applyAction;
                    bool m_applyActionHasBeenSet;

                    /**
                     * <p>Platform ID</p>
                     */
                    std::string m_platformId;
                    bool m_platformIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_CREATEMNGAPPROVALREQUEST_H_
