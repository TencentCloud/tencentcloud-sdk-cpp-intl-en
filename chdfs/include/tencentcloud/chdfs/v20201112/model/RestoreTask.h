/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CHDFS_V20201112_MODEL_RESTORETASK_H_
#define TENCENTCLOUD_CHDFS_V20201112_MODEL_RESTORETASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chdfs
    {
        namespace V20201112
        {
            namespace Model
            {
                /**
                * Restoration task
                */
                class RestoreTask : public AbstractModel
                {
                public:
                    RestoreTask();
                    ~RestoreTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Restoration task ID
                     * @return RestoreTaskId Restoration task ID
                     */
                    uint64_t GetRestoreTaskId() const;

                    /**
                     * 设置Restoration task ID
                     * @param RestoreTaskId Restoration task ID
                     */
                    void SetRestoreTaskId(const uint64_t& _restoreTaskId);

                    /**
                     * 判断参数 RestoreTaskId 是否已赋值
                     * @return RestoreTaskId 是否已赋值
                     */
                    bool RestoreTaskIdHasBeenSet() const;

                    /**
                     * 获取Restoration task file path
                     * @return FilePath Restoration task file path
                     */
                    std::string GetFilePath() const;

                    /**
                     * 设置Restoration task file path
                     * @param FilePath Restoration task file path
                     */
                    void SetFilePath(const std::string& _filePath);

                    /**
                     * 判断参数 FilePath 是否已赋值
                     * @return FilePath 是否已赋值
                     */
                    bool FilePathHasBeenSet() const;

                    /**
                     * 获取Restoration task type (`1`: standard; `2`: expedited; `3`: bulk, with only the expedited type available currently)
                     * @return Type Restoration task type (`1`: standard; `2`: expedited; `3`: bulk, with only the expedited type available currently)
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Restoration task type (`1`: standard; `2`: expedited; `3`: bulk, with only the expedited type available currently)
                     * @param Type Restoration task type (`1`: standard; `2`: expedited; `3`: bulk, with only the expedited type available currently)
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Validity period (in days) of the temporary copy generated during restoration
                     * @return Days Validity period (in days) of the temporary copy generated during restoration
                     */
                    uint64_t GetDays() const;

                    /**
                     * 设置Validity period (in days) of the temporary copy generated during restoration
                     * @param Days Validity period (in days) of the temporary copy generated during restoration
                     */
                    void SetDays(const uint64_t& _days);

                    /**
                     * 判断参数 Days 是否已赋值
                     * @return Days 是否已赋值
                     */
                    bool DaysHasBeenSet() const;

                    /**
                     * 获取Restoration task status (1: binding file; 2: file binding completed; 3: restoring file; 4: file restoration completed)
                     * @return Status Restoration task status (1: binding file; 2: file binding completed; 3: restoring file; 4: file restoration completed)
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Restoration task status (1: binding file; 2: file binding completed; 3: restoring file; 4: file restoration completed)
                     * @param Status Restoration task status (1: binding file; 2: file binding completed; 3: restoring file; 4: file restoration completed)
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param CreateTime Creation time
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * Restoration task ID
                     */
                    uint64_t m_restoreTaskId;
                    bool m_restoreTaskIdHasBeenSet;

                    /**
                     * Restoration task file path
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                    /**
                     * Restoration task type (`1`: standard; `2`: expedited; `3`: bulk, with only the expedited type available currently)
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Validity period (in days) of the temporary copy generated during restoration
                     */
                    uint64_t m_days;
                    bool m_daysHasBeenSet;

                    /**
                     * Restoration task status (1: binding file; 2: file binding completed; 3: restoring file; 4: file restoration completed)
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20201112_MODEL_RESTORETASK_H_
