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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_LISTSUBTASKSDATA_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_LISTSUBTASKSDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iss/v20230517/model/SubTaskData.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * List the subtask list
                */
                class ListSubTasksData : public AbstractModel
                {
                public:
                    ListSubTasksData();
                    ~ListSubTasksData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Subtask List
                     * @return List Subtask List
                     * 
                     */
                    std::vector<SubTaskData> GetList() const;

                    /**
                     * 设置Subtask List
                     * @param _list Subtask List
                     * 
                     */
                    void SetList(const std::vector<SubTaskData>& _list);

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                    /**
                     * 获取Subtask quantity
                     * @return TotalCount Subtask quantity
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置Subtask quantity
                     * @param _totalCount Subtask quantity
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Subtask List
                     */
                    std::vector<SubTaskData> m_list;
                    bool m_listHasBeenSet;

                    /**
                     * Subtask quantity
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_LISTSUBTASKSDATA_H_
