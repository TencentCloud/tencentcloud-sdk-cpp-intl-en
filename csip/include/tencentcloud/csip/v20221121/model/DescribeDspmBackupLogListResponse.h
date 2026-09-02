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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMBACKUPLOGLISTRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMBACKUPLOGLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/BackupLog.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeDspmBackupLogList response structure.
                */
                class DescribeDspmBackupLogListResponse : public AbstractModel
                {
                public:
                    DescribeDspmBackupLogListResponse();
                    ~DescribeDspmBackupLogListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>How many are there in total</p>
                     * @return TotalCount <p>How many are there in total</p>
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取<p>Backup log list.</p>
                     * @return List <p>Backup log list.</p>
                     * 
                     */
                    std::vector<BackupLog> GetList() const;

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                    /**
                     * 获取<p>Whether recovery tasks currently exist</p>
                     * @return HasRestoringTask <p>Whether recovery tasks currently exist</p>
                     * 
                     */
                    bool GetHasRestoringTask() const;

                    /**
                     * 判断参数 HasRestoringTask 是否已赋值
                     * @return HasRestoringTask 是否已赋值
                     * 
                     */
                    bool HasRestoringTaskHasBeenSet() const;

                    /**
                     * 获取<p>Maximum recovery space</p>
                     * @return MaxRestoreSizeInGB <p>Maximum recovery space</p>
                     * 
                     */
                    int64_t GetMaxRestoreSizeInGB() const;

                    /**
                     * 判断参数 MaxRestoreSizeInGB 是否已赋值
                     * @return MaxRestoreSizeInGB 是否已赋值
                     * 
                     */
                    bool MaxRestoreSizeInGBHasBeenSet() const;

                private:

                    /**
                     * <p>How many are there in total</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>Backup log list.</p>
                     */
                    std::vector<BackupLog> m_list;
                    bool m_listHasBeenSet;

                    /**
                     * <p>Whether recovery tasks currently exist</p>
                     */
                    bool m_hasRestoringTask;
                    bool m_hasRestoringTaskHasBeenSet;

                    /**
                     * <p>Maximum recovery space</p>
                     */
                    int64_t m_maxRestoreSizeInGB;
                    bool m_maxRestoreSizeInGBHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMBACKUPLOGLISTRESPONSE_H_
