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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_RECORDINFO_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_RECORDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * Information about the recording task in a room.
Note: This field may return null, indicating that no valid values can be obtained.
                */
                class RecordInfo : public AbstractModel
                {
                public:
                    RecordInfo();
                    ~RecordInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取User ID. The value is `0` in mixed streams recording mode.
                     * @return UserId User ID. The value is `0` in mixed streams recording mode.
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置User ID. The value is `0` in mixed streams recording mode.
                     * @param _userId User ID. The value is `0` in mixed streams recording mode.
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取Recording filename.
                     * @return FileName Recording filename.
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置Recording filename.
                     * @param _fileName Recording filename.
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取Recording start time, which is a Unix timestamp. Example: 1234567868.
                     * @return RecordBeginTime Recording start time, which is a Unix timestamp. Example: 1234567868.
                     * 
                     */
                    uint64_t GetRecordBeginTime() const;

                    /**
                     * 设置Recording start time, which is a Unix timestamp. Example: 1234567868.
                     * @param _recordBeginTime Recording start time, which is a Unix timestamp. Example: 1234567868.
                     * 
                     */
                    void SetRecordBeginTime(const uint64_t& _recordBeginTime);

                    /**
                     * 判断参数 RecordBeginTime 是否已赋值
                     * @return RecordBeginTime 是否已赋值
                     * 
                     */
                    bool RecordBeginTimeHasBeenSet() const;

                    /**
                     * 获取Recording status. Valid values: `2`: recording; `10`: to be transcoded; `11`: transcoding; `12`: uploading; `13`: uploaded; `14`: user notified.
                     * @return RecordStatus Recording status. Valid values: `2`: recording; `10`: to be transcoded; `11`: transcoding; `12`: uploading; `13`: uploaded; `14`: user notified.
                     * 
                     */
                    uint64_t GetRecordStatus() const;

                    /**
                     * 设置Recording status. Valid values: `2`: recording; `10`: to be transcoded; `11`: transcoding; `12`: uploading; `13`: uploaded; `14`: user notified.
                     * @param _recordStatus Recording status. Valid values: `2`: recording; `10`: to be transcoded; `11`: transcoding; `12`: uploading; `13`: uploaded; `14`: user notified.
                     * 
                     */
                    void SetRecordStatus(const uint64_t& _recordStatus);

                    /**
                     * 判断参数 RecordStatus 是否已赋值
                     * @return RecordStatus 是否已赋值
                     * 
                     */
                    bool RecordStatusHasBeenSet() const;

                private:

                    /**
                     * User ID. The value is `0` in mixed streams recording mode.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * Recording filename.
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * Recording start time, which is a Unix timestamp. Example: 1234567868.
                     */
                    uint64_t m_recordBeginTime;
                    bool m_recordBeginTimeHasBeenSet;

                    /**
                     * Recording status. Valid values: `2`: recording; `10`: to be transcoded; `11`: transcoding; `12`: uploading; `13`: uploaded; `14`: user notified.
                     */
                    uint64_t m_recordStatus;
                    bool m_recordStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_RECORDINFO_H_
