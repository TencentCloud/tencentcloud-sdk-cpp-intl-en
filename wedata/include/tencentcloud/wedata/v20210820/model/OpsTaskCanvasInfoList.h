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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_OPSTASKCANVASINFOLIST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_OPSTASKCANVASINFOLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/OpsTaskCanvasDto.h>
#include <tencentcloud/wedata/v20210820/model/OpsTaskLinkInfoDto.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Canvas Required Information
                */
                class OpsTaskCanvasInfoList : public AbstractModel
                {
                public:
                    OpsTaskCanvasInfoList();
                    ~OpsTaskCanvasInfoList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Canvas Task Information
                     * @return TasksList Canvas Task Information
                     * 
                     */
                    std::vector<OpsTaskCanvasDto> GetTasksList() const;

                    /**
                     * 设置Canvas Task Information
                     * @param _tasksList Canvas Task Information
                     * 
                     */
                    void SetTasksList(const std::vector<OpsTaskCanvasDto>& _tasksList);

                    /**
                     * 判断参数 TasksList 是否已赋值
                     * @return TasksList 是否已赋值
                     * 
                     */
                    bool TasksListHasBeenSet() const;

                    /**
                     * 获取Canvas Task Link Information
                     * @return LinksList Canvas Task Link Information
                     * 
                     */
                    std::vector<OpsTaskLinkInfoDto> GetLinksList() const;

                    /**
                     * 设置Canvas Task Link Information
                     * @param _linksList Canvas Task Link Information
                     * 
                     */
                    void SetLinksList(const std::vector<OpsTaskLinkInfoDto>& _linksList);

                    /**
                     * 判断参数 LinksList 是否已赋值
                     * @return LinksList 是否已赋值
                     * 
                     */
                    bool LinksListHasBeenSet() const;

                    /**
                     * 获取Canvas Cyclic Dependency Task Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CirculateTaskList Canvas Cyclic Dependency Task Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<OpsTaskCanvasDto> GetCirculateTaskList() const;

                    /**
                     * 设置Canvas Cyclic Dependency Task Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _circulateTaskList Canvas Cyclic Dependency Task Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCirculateTaskList(const std::vector<OpsTaskCanvasDto>& _circulateTaskList);

                    /**
                     * 判断参数 CirculateTaskList 是否已赋值
                     * @return CirculateTaskList 是否已赋值
                     * 
                     */
                    bool CirculateTaskListHasBeenSet() const;

                private:

                    /**
                     * Canvas Task Information
                     */
                    std::vector<OpsTaskCanvasDto> m_tasksList;
                    bool m_tasksListHasBeenSet;

                    /**
                     * Canvas Task Link Information
                     */
                    std::vector<OpsTaskLinkInfoDto> m_linksList;
                    bool m_linksListHasBeenSet;

                    /**
                     * Canvas Cyclic Dependency Task Information
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<OpsTaskCanvasDto> m_circulateTaskList;
                    bool m_circulateTaskListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_OPSTASKCANVASINFOLIST_H_
