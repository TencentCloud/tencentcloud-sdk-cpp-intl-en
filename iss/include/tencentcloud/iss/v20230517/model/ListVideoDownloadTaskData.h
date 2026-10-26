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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_LISTVIDEODOWNLOADTASKDATA_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_LISTVIDEODOWNLOADTASKDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iss/v20230517/model/VideoDownloadTask.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * Local recording download task list
                */
                class ListVideoDownloadTaskData : public AbstractModel
                {
                public:
                    ListVideoDownloadTaskData();
                    ~ListVideoDownloadTaskData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task list
                     * @return List Task list
                     * 
                     */
                    std::vector<VideoDownloadTask> GetList() const;

                    /**
                     * 设置Task list
                     * @param _list Task list
                     * 
                     */
                    void SetList(const std::vector<VideoDownloadTask>& _list);

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                    /**
                     * 获取Total number of tasks
                     * @return TotalCount Total number of tasks
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置Total number of tasks
                     * @param _totalCount Total number of tasks
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
                     * Task list
                     */
                    std::vector<VideoDownloadTask> m_list;
                    bool m_listHasBeenSet;

                    /**
                     * Total number of tasks
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_LISTVIDEODOWNLOADTASKDATA_H_
