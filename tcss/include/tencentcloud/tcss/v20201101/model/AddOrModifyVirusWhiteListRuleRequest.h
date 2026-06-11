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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_ADDORMODIFYVIRUSWHITELISTRULEREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_ADDORMODIFYVIRUSWHITELISTRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * AddOrModifyVirusWhiteListRule request structure.
                */
                class AddOrModifyVirusWhiteListRuleRequest : public AbstractModel
                {
                public:
                    AddOrModifyVirusWhiteListRuleRequest();
                    ~AddOrModifyVirusWhiteListRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>MD5 list.</p>
                     * @return Md5List <p>MD5 list.</p>
                     * 
                     */
                    std::vector<std::string> GetMd5List() const;

                    /**
                     * 设置<p>MD5 list.</p>
                     * @param _md5List <p>MD5 list.</p>
                     * 
                     */
                    void SetMd5List(const std::vector<std::string>& _md5List);

                    /**
                     * 判断参数 Md5List 是否已赋值
                     * @return Md5List 是否已赋值
                     * 
                     */
                    bool Md5ListHasBeenSet() const;

                    /**
                     * 获取<p>Scope: 1 indicates all images, and 0 indicates selected images.</p>
                     * @return Scope <p>Scope: 1 indicates all images, and 0 indicates selected images.</p>
                     * 
                     */
                    uint64_t GetScope() const;

                    /**
                     * 设置<p>Scope: 1 indicates all images, and 0 indicates selected images.</p>
                     * @param _scope <p>Scope: 1 indicates all images, and 0 indicates selected images.</p>
                     * 
                     */
                    void SetScope(const uint64_t& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取<p>Rule ID. Presence of rule ID values indicates modification, and absence of rule ID values indicates addition.</p>
                     * @return Id <p>Rule ID. Presence of rule ID values indicates modification, and absence of rule ID values indicates addition.</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>Rule ID. Presence of rule ID values indicates modification, and absence of rule ID values indicates addition.</p>
                     * @param _id <p>Rule ID. Presence of rule ID values indicates modification, and absence of rule ID values indicates addition.</p>
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>Image ID list, maximum 1,000. Required when Scope is 0 (selected images).</p>
                     * @return ImageIds <p>Image ID list, maximum 1,000. Required when Scope is 0 (selected images).</p>
                     * 
                     */
                    std::vector<std::string> GetImageIds() const;

                    /**
                     * 设置<p>Image ID list, maximum 1,000. Required when Scope is 0 (selected images).</p>
                     * @param _imageIds <p>Image ID list, maximum 1,000. Required when Scope is 0 (selected images).</p>
                     * 
                     */
                    void SetImageIds(const std::vector<std::string>& _imageIds);

                    /**
                     * 判断参数 ImageIds 是否已赋值
                     * @return ImageIds 是否已赋值
                     * 
                     */
                    bool ImageIdsHasBeenSet() const;

                    /**
                     * 获取<p>Rule remarks, with a maximum of 256 characters.</p>
                     * @return Remark <p>Rule remarks, with a maximum of 256 characters.</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>Rule remarks, with a maximum of 256 characters.</p>
                     * @param _remark <p>Rule remarks, with a maximum of 256 characters.</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>Event ID.</p>
                     * @return EventId <p>Event ID.</p>
                     * 
                     */
                    uint64_t GetEventId() const;

                    /**
                     * 设置<p>Event ID.</p>
                     * @param _eventId <p>Event ID.</p>
                     * 
                     */
                    void SetEventId(const uint64_t& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                private:

                    /**
                     * <p>MD5 list.</p>
                     */
                    std::vector<std::string> m_md5List;
                    bool m_md5ListHasBeenSet;

                    /**
                     * <p>Scope: 1 indicates all images, and 0 indicates selected images.</p>
                     */
                    uint64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * <p>Rule ID. Presence of rule ID values indicates modification, and absence of rule ID values indicates addition.</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>Image ID list, maximum 1,000. Required when Scope is 0 (selected images).</p>
                     */
                    std::vector<std::string> m_imageIds;
                    bool m_imageIdsHasBeenSet;

                    /**
                     * <p>Rule remarks, with a maximum of 256 characters.</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>Event ID.</p>
                     */
                    uint64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_ADDORMODIFYVIRUSWHITELISTRULEREQUEST_H_
