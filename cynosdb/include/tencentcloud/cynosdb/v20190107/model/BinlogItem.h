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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BINLOGITEM_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BINLOGITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Binlog description
                */
                class BinlogItem : public AbstractModel
                {
                public:
                    BinlogItem();
                    ~BinlogItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Binlog filename
                     * @return FileName Binlog filename
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置Binlog filename
                     * @param FileName Binlog filename
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取File size in bytes
                     * @return FileSize File size in bytes
                     */
                    int64_t GetFileSize() const;

                    /**
                     * 设置File size in bytes
                     * @param FileSize File size in bytes
                     */
                    void SetFileSize(const int64_t& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取Transaction start time
                     * @return StartTime Transaction start time
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Transaction start time
                     * @param StartTime Transaction start time
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Transaction end time
                     * @return FinishTime Transaction end time
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置Transaction end time
                     * @param FinishTime Transaction end time
                     */
                    void SetFinishTime(const std::string& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取Binlog file ID
                     * @return BinlogId Binlog file ID
                     */
                    int64_t GetBinlogId() const;

                    /**
                     * 设置Binlog file ID
                     * @param BinlogId Binlog file ID
                     */
                    void SetBinlogId(const int64_t& _binlogId);

                    /**
                     * 判断参数 BinlogId 是否已赋值
                     * @return BinlogId 是否已赋值
                     */
                    bool BinlogIdHasBeenSet() const;

                private:

                    /**
                     * Binlog filename
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * File size in bytes
                     */
                    int64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * Transaction start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Transaction end time
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * Binlog file ID
                     */
                    int64_t m_binlogId;
                    bool m_binlogIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BINLOGITEM_H_
