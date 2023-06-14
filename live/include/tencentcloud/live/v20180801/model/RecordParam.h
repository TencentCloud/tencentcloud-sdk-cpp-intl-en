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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_RECORDPARAM_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_RECORDPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * Recording template parameter.
                */
                class RecordParam : public AbstractModel
                {
                public:
                    RecordParam();
                    ~RecordParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Max recording time per file
Default value: `1800` (seconds)
Value range: 30-7200
This parameter is invalid for HLS. Only one HLS file will be generated from push start to push end.
                     * @return RecordInterval Max recording time per file
Default value: `1800` (seconds)
Value range: 30-7200
This parameter is invalid for HLS. Only one HLS file will be generated from push start to push end.
                     * 
                     */
                    int64_t GetRecordInterval() const;

                    /**
                     * 设置Max recording time per file
Default value: `1800` (seconds)
Value range: 30-7200
This parameter is invalid for HLS. Only one HLS file will be generated from push start to push end.
                     * @param _recordInterval Max recording time per file
Default value: `1800` (seconds)
Value range: 30-7200
This parameter is invalid for HLS. Only one HLS file will be generated from push start to push end.
                     * 
                     */
                    void SetRecordInterval(const int64_t& _recordInterval);

                    /**
                     * 判断参数 RecordInterval 是否已赋值
                     * @return RecordInterval 是否已赋值
                     * 
                     */
                    bool RecordIntervalHasBeenSet() const;

                    /**
                     * 获取Storage duration of the recording file
Value range: 0-129600000 seconds (0-1500 days)
`0`: permanent
                     * @return StorageTime Storage duration of the recording file
Value range: 0-129600000 seconds (0-1500 days)
`0`: permanent
                     * 
                     */
                    int64_t GetStorageTime() const;

                    /**
                     * 设置Storage duration of the recording file
Value range: 0-129600000 seconds (0-1500 days)
`0`: permanent
                     * @param _storageTime Storage duration of the recording file
Value range: 0-129600000 seconds (0-1500 days)
`0`: permanent
                     * 
                     */
                    void SetStorageTime(const int64_t& _storageTime);

                    /**
                     * 判断参数 StorageTime 是否已赋值
                     * @return StorageTime 是否已赋值
                     * 
                     */
                    bool StorageTimeHasBeenSet() const;

                    /**
                     * 获取Whether to enable recording in the current format. Default value: 0. 0: no, 1: yes.
                     * @return Enable Whether to enable recording in the current format. Default value: 0. 0: no, 1: yes.
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置Whether to enable recording in the current format. Default value: 0. 0: no, 1: yes.
                     * @param _enable Whether to enable recording in the current format. Default value: 0. 0: no, 1: yes.
                     * 
                     */
                    void SetEnable(const int64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取VOD subapplication ID.
                     * @return VodSubAppId VOD subapplication ID.
                     * 
                     */
                    int64_t GetVodSubAppId() const;

                    /**
                     * 设置VOD subapplication ID.
                     * @param _vodSubAppId VOD subapplication ID.
                     * 
                     */
                    void SetVodSubAppId(const int64_t& _vodSubAppId);

                    /**
                     * 判断参数 VodSubAppId 是否已赋值
                     * @return VodSubAppId 是否已赋值
                     * 
                     */
                    bool VodSubAppIdHasBeenSet() const;

                    /**
                     * 获取Recording filename.
Supported special placeholders include:
{StreamID}: stream ID
{StartYear}: start time - year
{StartMonth}: start time - month
{StartDay}: start time - day
{StartHour}: start time - hour
{StartMinute}: start time - minute
{StartSecond}: start time - second
{StartMillisecond}: start time - millisecond
{EndYear}: end time - year
{EndMonth}: end time - month
{EndDay}: end time - day
{EndHour}: end time - hour
{EndMinute}: end time - minute
{EndSecond}: end time - second
{EndMillisecond}: end time - millisecond

If this parameter is not set, the recording filename will be `{StreamID}_{StartYear}-{StartMonth}-{StartDay}-{StartHour}-{StartMinute}-{StartSecond}_{EndYear}-{EndMonth}-{EndDay}-{EndHour}-{EndMinute}-{EndSecond}` by default
                     * @return VodFileName Recording filename.
Supported special placeholders include:
{StreamID}: stream ID
{StartYear}: start time - year
{StartMonth}: start time - month
{StartDay}: start time - day
{StartHour}: start time - hour
{StartMinute}: start time - minute
{StartSecond}: start time - second
{StartMillisecond}: start time - millisecond
{EndYear}: end time - year
{EndMonth}: end time - month
{EndDay}: end time - day
{EndHour}: end time - hour
{EndMinute}: end time - minute
{EndSecond}: end time - second
{EndMillisecond}: end time - millisecond

If this parameter is not set, the recording filename will be `{StreamID}_{StartYear}-{StartMonth}-{StartDay}-{StartHour}-{StartMinute}-{StartSecond}_{EndYear}-{EndMonth}-{EndDay}-{EndHour}-{EndMinute}-{EndSecond}` by default
                     * 
                     */
                    std::string GetVodFileName() const;

                    /**
                     * 设置Recording filename.
Supported special placeholders include:
{StreamID}: stream ID
{StartYear}: start time - year
{StartMonth}: start time - month
{StartDay}: start time - day
{StartHour}: start time - hour
{StartMinute}: start time - minute
{StartSecond}: start time - second
{StartMillisecond}: start time - millisecond
{EndYear}: end time - year
{EndMonth}: end time - month
{EndDay}: end time - day
{EndHour}: end time - hour
{EndMinute}: end time - minute
{EndSecond}: end time - second
{EndMillisecond}: end time - millisecond

If this parameter is not set, the recording filename will be `{StreamID}_{StartYear}-{StartMonth}-{StartDay}-{StartHour}-{StartMinute}-{StartSecond}_{EndYear}-{EndMonth}-{EndDay}-{EndHour}-{EndMinute}-{EndSecond}` by default
                     * @param _vodFileName Recording filename.
Supported special placeholders include:
{StreamID}: stream ID
{StartYear}: start time - year
{StartMonth}: start time - month
{StartDay}: start time - day
{StartHour}: start time - hour
{StartMinute}: start time - minute
{StartSecond}: start time - second
{StartMillisecond}: start time - millisecond
{EndYear}: end time - year
{EndMonth}: end time - month
{EndDay}: end time - day
{EndHour}: end time - hour
{EndMinute}: end time - minute
{EndSecond}: end time - second
{EndMillisecond}: end time - millisecond

If this parameter is not set, the recording filename will be `{StreamID}_{StartYear}-{StartMonth}-{StartDay}-{StartHour}-{StartMinute}-{StartSecond}_{EndYear}-{EndMonth}-{EndDay}-{EndHour}-{EndMinute}-{EndSecond}` by default
                     * 
                     */
                    void SetVodFileName(const std::string& _vodFileName);

                    /**
                     * 判断参数 VodFileName 是否已赋值
                     * @return VodFileName 是否已赋值
                     * 
                     */
                    bool VodFileNameHasBeenSet() const;

                    /**
                     * 获取Task flow
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return Procedure Task flow
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetProcedure() const;

                    /**
                     * 设置Task flow
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _procedure Task flow
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetProcedure(const std::string& _procedure);

                    /**
                     * 判断参数 Procedure 是否已赋值
                     * @return Procedure 是否已赋值
                     * 
                     */
                    bool ProcedureHasBeenSet() const;

                    /**
                     * 获取Video storage class. Valid values:
`normal`: STANDARD
`cold`: STANDARD_IA
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return StorageMode Video storage class. Valid values:
`normal`: STANDARD
`cold`: STANDARD_IA
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetStorageMode() const;

                    /**
                     * 设置Video storage class. Valid values:
`normal`: STANDARD
`cold`: STANDARD_IA
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _storageMode Video storage class. Valid values:
`normal`: STANDARD
`cold`: STANDARD_IA
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetStorageMode(const std::string& _storageMode);

                    /**
                     * 判断参数 StorageMode 是否已赋值
                     * @return StorageMode 是否已赋值
                     * 
                     */
                    bool StorageModeHasBeenSet() const;

                    /**
                     * 获取VOD subapplication category
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return ClassId VOD subapplication category
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    int64_t GetClassId() const;

                    /**
                     * 设置VOD subapplication category
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _classId VOD subapplication category
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetClassId(const int64_t& _classId);

                    /**
                     * 判断参数 ClassId 是否已赋值
                     * @return ClassId 是否已赋值
                     * 
                     */
                    bool ClassIdHasBeenSet() const;

                private:

                    /**
                     * Max recording time per file
Default value: `1800` (seconds)
Value range: 30-7200
This parameter is invalid for HLS. Only one HLS file will be generated from push start to push end.
                     */
                    int64_t m_recordInterval;
                    bool m_recordIntervalHasBeenSet;

                    /**
                     * Storage duration of the recording file
Value range: 0-129600000 seconds (0-1500 days)
`0`: permanent
                     */
                    int64_t m_storageTime;
                    bool m_storageTimeHasBeenSet;

                    /**
                     * Whether to enable recording in the current format. Default value: 0. 0: no, 1: yes.
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * VOD subapplication ID.
                     */
                    int64_t m_vodSubAppId;
                    bool m_vodSubAppIdHasBeenSet;

                    /**
                     * Recording filename.
Supported special placeholders include:
{StreamID}: stream ID
{StartYear}: start time - year
{StartMonth}: start time - month
{StartDay}: start time - day
{StartHour}: start time - hour
{StartMinute}: start time - minute
{StartSecond}: start time - second
{StartMillisecond}: start time - millisecond
{EndYear}: end time - year
{EndMonth}: end time - month
{EndDay}: end time - day
{EndHour}: end time - hour
{EndMinute}: end time - minute
{EndSecond}: end time - second
{EndMillisecond}: end time - millisecond

If this parameter is not set, the recording filename will be `{StreamID}_{StartYear}-{StartMonth}-{StartDay}-{StartHour}-{StartMinute}-{StartSecond}_{EndYear}-{EndMonth}-{EndDay}-{EndHour}-{EndMinute}-{EndSecond}` by default
                     */
                    std::string m_vodFileName;
                    bool m_vodFileNameHasBeenSet;

                    /**
                     * Task flow
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_procedure;
                    bool m_procedureHasBeenSet;

                    /**
                     * Video storage class. Valid values:
`normal`: STANDARD
`cold`: STANDARD_IA
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_storageMode;
                    bool m_storageModeHasBeenSet;

                    /**
                     * VOD subapplication category
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    int64_t m_classId;
                    bool m_classIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_RECORDPARAM_H_
