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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_OPSTASKLINKINFODTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_OPSTASKLINKINFODTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Dependency edge information of the task
                */
                class OpsTaskLinkInfoDto : public AbstractModel
                {
                public:
                    OpsTaskLinkInfoDto();
                    ~OpsTaskLinkInfoDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Downstream task ID
                     * @return TaskTo Downstream task ID
                     * 
                     */
                    std::string GetTaskTo() const;

                    /**
                     * 设置Downstream task ID
                     * @param _taskTo Downstream task ID
                     * 
                     */
                    void SetTaskTo(const std::string& _taskTo);

                    /**
                     * 判断参数 TaskTo 是否已赋值
                     * @return TaskTo 是否已赋值
                     * 
                     */
                    bool TaskToHasBeenSet() const;

                    /**
                     * 获取Upstream task ID
                     * @return TaskFrom Upstream task ID
                     * 
                     */
                    std::string GetTaskFrom() const;

                    /**
                     * 设置Upstream task ID
                     * @param _taskFrom Upstream task ID
                     * 
                     */
                    void SetTaskFrom(const std::string& _taskFrom);

                    /**
                     * 判断参数 TaskFrom 是否已赋值
                     * @return TaskFrom 是否已赋值
                     * 
                     */
                    bool TaskFromHasBeenSet() const;

                    /**
                     * 获取Dependency Edge Type 1,"real_real" indicates task->task; 2, "virtual_real" crossed workflow task->task
                     * @return LinkType Dependency Edge Type 1,"real_real" indicates task->task; 2, "virtual_real" crossed workflow task->task
                     * 
                     */
                    std::string GetLinkType() const;

                    /**
                     * 设置Dependency Edge Type 1,"real_real" indicates task->task; 2, "virtual_real" crossed workflow task->task
                     * @param _linkType Dependency Edge Type 1,"real_real" indicates task->task; 2, "virtual_real" crossed workflow task->task
                     * 
                     */
                    void SetLinkType(const std::string& _linkType);

                    /**
                     * 判断参数 LinkType 是否已赋值
                     * @return LinkType 是否已赋值
                     * 
                     */
                    bool LinkTypeHasBeenSet() const;

                    /**
                     * 获取Dependency Edge ID
                     * @return LinkId Dependency Edge ID
                     * 
                     */
                    std::string GetLinkId() const;

                    /**
                     * 设置Dependency Edge ID
                     * @param _linkId Dependency Edge ID
                     * 
                     */
                    void SetLinkId(const std::string& _linkId);

                    /**
                     * 判断参数 LinkId 是否已赋值
                     * @return LinkId 是否已赋值
                     * 
                     */
                    bool LinkIdHasBeenSet() const;

                    /**
                     * 获取To distinguish newly added cyclic dependency. Default is normal, for cyclic dependency it is circulate
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return LinkStyle To distinguish newly added cyclic dependency. Default is normal, for cyclic dependency it is circulate
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetLinkStyle() const;

                    /**
                     * 设置To distinguish newly added cyclic dependency. Default is normal, for cyclic dependency it is circulate
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _linkStyle To distinguish newly added cyclic dependency. Default is normal, for cyclic dependency it is circulate
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetLinkStyle(const std::string& _linkStyle);

                    /**
                     * 判断参数 LinkStyle 是否已赋值
                     * @return LinkStyle 是否已赋值
                     * 
                     */
                    bool LinkStyleHasBeenSet() const;

                private:

                    /**
                     * Downstream task ID
                     */
                    std::string m_taskTo;
                    bool m_taskToHasBeenSet;

                    /**
                     * Upstream task ID
                     */
                    std::string m_taskFrom;
                    bool m_taskFromHasBeenSet;

                    /**
                     * Dependency Edge Type 1,"real_real" indicates task->task; 2, "virtual_real" crossed workflow task->task
                     */
                    std::string m_linkType;
                    bool m_linkTypeHasBeenSet;

                    /**
                     * Dependency Edge ID
                     */
                    std::string m_linkId;
                    bool m_linkIdHasBeenSet;

                    /**
                     * To distinguish newly added cyclic dependency. Default is normal, for cyclic dependency it is circulate
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_linkStyle;
                    bool m_linkStyleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_OPSTASKLINKINFODTO_H_
