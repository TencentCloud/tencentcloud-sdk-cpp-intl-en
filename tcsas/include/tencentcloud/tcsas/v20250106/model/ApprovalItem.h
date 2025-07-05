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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_APPROVALITEM_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_APPROVALITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Result of the mini program approval requests
                */
                class ApprovalItem : public AbstractModel
                {
                public:
                    ApprovalItem();
                    ~ApprovalItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Application ID
                     * @return AppId Application ID
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置Application ID
                     * @param _appId Application ID
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Approval result. 2: Rejected;
3: Approved
                     * @return ApprovalResult Approval result. 2: Rejected;
3: Approved
                     * 
                     */
                    int64_t GetApprovalResult() const;

                    /**
                     * 设置Approval result. 2: Rejected;
3: Approved
                     * @param _approvalResult Approval result. 2: Rejected;
3: Approved
                     * 
                     */
                    void SetApprovalResult(const int64_t& _approvalResult);

                    /**
                     * 判断参数 ApprovalResult 是否已赋值
                     * @return ApprovalResult 是否已赋值
                     * 
                     */
                    bool ApprovalResultHasBeenSet() const;

                    /**
                     * 获取Approval notes. It’s required when the request is rejected.
                     * @return ApprovalNote Approval notes. It’s required when the request is rejected.
                     * 
                     */
                    std::string GetApprovalNote() const;

                    /**
                     * 设置Approval notes. It’s required when the request is rejected.
                     * @param _approvalNote Approval notes. It’s required when the request is rejected.
                     * 
                     */
                    void SetApprovalNote(const std::string& _approvalNote);

                    /**
                     * 判断参数 ApprovalNote 是否已赋值
                     * @return ApprovalNote 是否已赋值
                     * 
                     */
                    bool ApprovalNoteHasBeenSet() const;

                private:

                    /**
                     * Application ID
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Approval result. 2: Rejected;
3: Approved
                     */
                    int64_t m_approvalResult;
                    bool m_approvalResultHasBeenSet;

                    /**
                     * Approval notes. It’s required when the request is rejected.
                     */
                    std::string m_approvalNote;
                    bool m_approvalNoteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_APPROVALITEM_H_
