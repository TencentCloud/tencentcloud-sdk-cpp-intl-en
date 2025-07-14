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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_MCURECORDPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_MCURECORDPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/McuStorageParams.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * Relay Recording Parameters
                */
                class McuRecordParams : public AbstractModel
                {
                public:
                    McuRecordParams();
                    ~McuRecordParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Relay Recording Mode
0/blank: Not currently supported, behavior undefined.
1: Disable recording.
2: Start recording (uses console's auto-recording template parameters. Reference: [Link to Documentation]).
3: Start recording (uses API-specified parameters).
Example: 2
                     * @return UniRecord Relay Recording Mode
0/blank: Not currently supported, behavior undefined.
1: Disable recording.
2: Start recording (uses console's auto-recording template parameters. Reference: [Link to Documentation]).
3: Start recording (uses API-specified parameters).
Example: 2
                     * 
                     */
                    uint64_t GetUniRecord() const;

                    /**
                     * 设置Relay Recording Mode
0/blank: Not currently supported, behavior undefined.
1: Disable recording.
2: Start recording (uses console's auto-recording template parameters. Reference: [Link to Documentation]).
3: Start recording (uses API-specified parameters).
Example: 2
                     * @param _uniRecord Relay Recording Mode
0/blank: Not currently supported, behavior undefined.
1: Disable recording.
2: Start recording (uses console's auto-recording template parameters. Reference: [Link to Documentation]).
3: Start recording (uses API-specified parameters).
Example: 2
                     * 
                     */
                    void SetUniRecord(const uint64_t& _uniRecord);

                    /**
                     * 判断参数 UniRecord 是否已赋值
                     * @return UniRecord 是否已赋值
                     * 
                     */
                    bool UniRecordHasBeenSet() const;

                    /**
                     * 获取Recording Task Key
Identifies a recording task. This parameter allows merging multiple relay tasks into one recording file. If unspecified, only records the current relay task.
[Format: Up to 128 bytes; only letters (a-z, A-Z), numbers (0-9), underscores (_), and hyphens (-).]
Example: test_record_key_a
                     * @return RecordKey Recording Task Key
Identifies a recording task. This parameter allows merging multiple relay tasks into one recording file. If unspecified, only records the current relay task.
[Format: Up to 128 bytes; only letters (a-z, A-Z), numbers (0-9), underscores (_), and hyphens (-).]
Example: test_record_key_a
                     * 
                     */
                    std::string GetRecordKey() const;

                    /**
                     * 设置Recording Task Key
Identifies a recording task. This parameter allows merging multiple relay tasks into one recording file. If unspecified, only records the current relay task.
[Format: Up to 128 bytes; only letters (a-z, A-Z), numbers (0-9), underscores (_), and hyphens (-).]
Example: test_record_key_a
                     * @param _recordKey Recording Task Key
Identifies a recording task. This parameter allows merging multiple relay tasks into one recording file. If unspecified, only records the current relay task.
[Format: Up to 128 bytes; only letters (a-z, A-Z), numbers (0-9), underscores (_), and hyphens (-).]
Example: test_record_key_a
                     * 
                     */
                    void SetRecordKey(const std::string& _recordKey);

                    /**
                     * 判断参数 RecordKey 是否已赋值
                     * @return RecordKey 是否已赋值
                     * 
                     */
                    bool RecordKeyHasBeenSet() const;

                    /**
                     * 获取[Valid only when UniRecord=3]
Recording Resume Wait Time
Corresponds to template parameter "Resume Wait Duration." Unit: seconds.
Range: 5-86400 (24 hours). Default: 30. Recording stops if idle longer than this value.
Example: 30
                     * @return RecordWaitTime [Valid only when UniRecord=3]
Recording Resume Wait Time
Corresponds to template parameter "Resume Wait Duration." Unit: seconds.
Range: 5-86400 (24 hours). Default: 30. Recording stops if idle longer than this value.
Example: 30
                     * 
                     */
                    uint64_t GetRecordWaitTime() const;

                    /**
                     * 设置[Valid only when UniRecord=3]
Recording Resume Wait Time
Corresponds to template parameter "Resume Wait Duration." Unit: seconds.
Range: 5-86400 (24 hours). Default: 30. Recording stops if idle longer than this value.
Example: 30
                     * @param _recordWaitTime [Valid only when UniRecord=3]
Recording Resume Wait Time
Corresponds to template parameter "Resume Wait Duration." Unit: seconds.
Range: 5-86400 (24 hours). Default: 30. Recording stops if idle longer than this value.
Example: 30
                     * 
                     */
                    void SetRecordWaitTime(const uint64_t& _recordWaitTime);

                    /**
                     * 判断参数 RecordWaitTime 是否已赋值
                     * @return RecordWaitTime 是否已赋值
                     * 
                     */
                    bool RecordWaitTimeHasBeenSet() const;

                    /**
                     * 获取[Valid only when UniRecord=3]
Recording Output Formats
Corresponds to template parameter "File Format." Supported values: hls, mp4, aac. Default: mp4.
Note: mp4 and aac formats are mutually exclusive.
Example (MP4 only): ["mp4"]
Example (MP4 + HLS): ["mp4","hls"]
                     * @return RecordFormat [Valid only when UniRecord=3]
Recording Output Formats
Corresponds to template parameter "File Format." Supported values: hls, mp4, aac. Default: mp4.
Note: mp4 and aac formats are mutually exclusive.
Example (MP4 only): ["mp4"]
Example (MP4 + HLS): ["mp4","hls"]
                     * 
                     */
                    std::vector<std::string> GetRecordFormat() const;

                    /**
                     * 设置[Valid only when UniRecord=3]
Recording Output Formats
Corresponds to template parameter "File Format." Supported values: hls, mp4, aac. Default: mp4.
Note: mp4 and aac formats are mutually exclusive.
Example (MP4 only): ["mp4"]
Example (MP4 + HLS): ["mp4","hls"]
                     * @param _recordFormat [Valid only when UniRecord=3]
Recording Output Formats
Corresponds to template parameter "File Format." Supported values: hls, mp4, aac. Default: mp4.
Note: mp4 and aac formats are mutually exclusive.
Example (MP4 only): ["mp4"]
Example (MP4 + HLS): ["mp4","hls"]
                     * 
                     */
                    void SetRecordFormat(const std::vector<std::string>& _recordFormat);

                    /**
                     * 判断参数 RecordFormat 是否已赋值
                     * @return RecordFormat 是否已赋值
                     * 
                     */
                    bool RecordFormatHasBeenSet() const;

                    /**
                     * 获取[Valid only when UniRecord=3]
Single File Duration
Corresponds to template parameter "Max File Duration." Unit: minutes.
Range: 1-1440 (24 hours). Default: 1440. Applies only to mp4/aac. Actual duration is capped at 2GB file size.
Example: 1440
                     * @return MaxMediaFileDuration [Valid only when UniRecord=3]
Single File Duration
Corresponds to template parameter "Max File Duration." Unit: minutes.
Range: 1-1440 (24 hours). Default: 1440. Applies only to mp4/aac. Actual duration is capped at 2GB file size.
Example: 1440
                     * 
                     */
                    uint64_t GetMaxMediaFileDuration() const;

                    /**
                     * 设置[Valid only when UniRecord=3]
Single File Duration
Corresponds to template parameter "Max File Duration." Unit: minutes.
Range: 1-1440 (24 hours). Default: 1440. Applies only to mp4/aac. Actual duration is capped at 2GB file size.
Example: 1440
                     * @param _maxMediaFileDuration [Valid only when UniRecord=3]
Single File Duration
Corresponds to template parameter "Max File Duration." Unit: minutes.
Range: 1-1440 (24 hours). Default: 1440. Applies only to mp4/aac. Actual duration is capped at 2GB file size.
Example: 1440
                     * 
                     */
                    void SetMaxMediaFileDuration(const uint64_t& _maxMediaFileDuration);

                    /**
                     * 判断参数 MaxMediaFileDuration 是否已赋值
                     * @return MaxMediaFileDuration 是否已赋值
                     * 
                     */
                    bool MaxMediaFileDurationHasBeenSet() const;

                    /**
                     * 获取[Valid only when UniRecord=3]
Recording Media Type
Corresponds to template parameter "Recording Format."
0: Audio+Video, 1: Audio only, 2: Video only. Output is the intersection of this setting and relay content.
Example: 0
                     * @return StreamType [Valid only when UniRecord=3]
Recording Media Type
Corresponds to template parameter "Recording Format."
0: Audio+Video, 1: Audio only, 2: Video only. Output is the intersection of this setting and relay content.
Example: 0
                     * 
                     */
                    uint64_t GetStreamType() const;

                    /**
                     * 设置[Valid only when UniRecord=3]
Recording Media Type
Corresponds to template parameter "Recording Format."
0: Audio+Video, 1: Audio only, 2: Video only. Output is the intersection of this setting and relay content.
Example: 0
                     * @param _streamType [Valid only when UniRecord=3]
Recording Media Type
Corresponds to template parameter "Recording Format."
0: Audio+Video, 1: Audio only, 2: Video only. Output is the intersection of this setting and relay content.
Example: 0
                     * 
                     */
                    void SetStreamType(const uint64_t& _streamType);

                    /**
                     * 判断参数 StreamType 是否已赋值
                     * @return StreamType 是否已赋值
                     * 
                     */
                    bool StreamTypeHasBeenSet() const;

                    /**
                     * 获取Recording Filename Prefix
Filename prefix (<=64 bytes). Applies only to VOD storage.
*Format: Letters (a-z, A-Z), numbers (0-9), underscores (_), hyphens (-).*
Example: mcu_record_prefix
                     * @return UserDefineRecordPrefix Recording Filename Prefix
Filename prefix (<=64 bytes). Applies only to VOD storage.
*Format: Letters (a-z, A-Z), numbers (0-9), underscores (_), hyphens (-).*
Example: mcu_record_prefix
                     * 
                     */
                    std::string GetUserDefineRecordPrefix() const;

                    /**
                     * 设置Recording Filename Prefix
Filename prefix (<=64 bytes). Applies only to VOD storage.
*Format: Letters (a-z, A-Z), numbers (0-9), underscores (_), hyphens (-).*
Example: mcu_record_prefix
                     * @param _userDefineRecordPrefix Recording Filename Prefix
Filename prefix (<=64 bytes). Applies only to VOD storage.
*Format: Letters (a-z, A-Z), numbers (0-9), underscores (_), hyphens (-).*
Example: mcu_record_prefix
                     * 
                     */
                    void SetUserDefineRecordPrefix(const std::string& _userDefineRecordPrefix);

                    /**
                     * 判断参数 UserDefineRecordPrefix 是否已赋值
                     * @return UserDefineRecordPrefix 是否已赋值
                     * 
                     */
                    bool UserDefineRecordPrefixHasBeenSet() const;

                    /**
                     * 获取[Valid only when UniRecord=3]
Recording Storage Parameters
Corresponds to console parameter "Storage Location." Supports Tencent VOD or COS (exclusively).
Example: {"McuCloudVod":{"McuTencentVod":{"ExpireTime":86400}}}
                     * @return McuStorageParams [Valid only when UniRecord=3]
Recording Storage Parameters
Corresponds to console parameter "Storage Location." Supports Tencent VOD or COS (exclusively).
Example: {"McuCloudVod":{"McuTencentVod":{"ExpireTime":86400}}}
                     * 
                     */
                    McuStorageParams GetMcuStorageParams() const;

                    /**
                     * 设置[Valid only when UniRecord=3]
Recording Storage Parameters
Corresponds to console parameter "Storage Location." Supports Tencent VOD or COS (exclusively).
Example: {"McuCloudVod":{"McuTencentVod":{"ExpireTime":86400}}}
                     * @param _mcuStorageParams [Valid only when UniRecord=3]
Recording Storage Parameters
Corresponds to console parameter "Storage Location." Supports Tencent VOD or COS (exclusively).
Example: {"McuCloudVod":{"McuTencentVod":{"ExpireTime":86400}}}
                     * 
                     */
                    void SetMcuStorageParams(const McuStorageParams& _mcuStorageParams);

                    /**
                     * 判断参数 McuStorageParams 是否已赋值
                     * @return McuStorageParams 是否已赋值
                     * 
                     */
                    bool McuStorageParamsHasBeenSet() const;

                private:

                    /**
                     * Relay Recording Mode
0/blank: Not currently supported, behavior undefined.
1: Disable recording.
2: Start recording (uses console's auto-recording template parameters. Reference: [Link to Documentation]).
3: Start recording (uses API-specified parameters).
Example: 2
                     */
                    uint64_t m_uniRecord;
                    bool m_uniRecordHasBeenSet;

                    /**
                     * Recording Task Key
Identifies a recording task. This parameter allows merging multiple relay tasks into one recording file. If unspecified, only records the current relay task.
[Format: Up to 128 bytes; only letters (a-z, A-Z), numbers (0-9), underscores (_), and hyphens (-).]
Example: test_record_key_a
                     */
                    std::string m_recordKey;
                    bool m_recordKeyHasBeenSet;

                    /**
                     * [Valid only when UniRecord=3]
Recording Resume Wait Time
Corresponds to template parameter "Resume Wait Duration." Unit: seconds.
Range: 5-86400 (24 hours). Default: 30. Recording stops if idle longer than this value.
Example: 30
                     */
                    uint64_t m_recordWaitTime;
                    bool m_recordWaitTimeHasBeenSet;

                    /**
                     * [Valid only when UniRecord=3]
Recording Output Formats
Corresponds to template parameter "File Format." Supported values: hls, mp4, aac. Default: mp4.
Note: mp4 and aac formats are mutually exclusive.
Example (MP4 only): ["mp4"]
Example (MP4 + HLS): ["mp4","hls"]
                     */
                    std::vector<std::string> m_recordFormat;
                    bool m_recordFormatHasBeenSet;

                    /**
                     * [Valid only when UniRecord=3]
Single File Duration
Corresponds to template parameter "Max File Duration." Unit: minutes.
Range: 1-1440 (24 hours). Default: 1440. Applies only to mp4/aac. Actual duration is capped at 2GB file size.
Example: 1440
                     */
                    uint64_t m_maxMediaFileDuration;
                    bool m_maxMediaFileDurationHasBeenSet;

                    /**
                     * [Valid only when UniRecord=3]
Recording Media Type
Corresponds to template parameter "Recording Format."
0: Audio+Video, 1: Audio only, 2: Video only. Output is the intersection of this setting and relay content.
Example: 0
                     */
                    uint64_t m_streamType;
                    bool m_streamTypeHasBeenSet;

                    /**
                     * Recording Filename Prefix
Filename prefix (<=64 bytes). Applies only to VOD storage.
*Format: Letters (a-z, A-Z), numbers (0-9), underscores (_), hyphens (-).*
Example: mcu_record_prefix
                     */
                    std::string m_userDefineRecordPrefix;
                    bool m_userDefineRecordPrefixHasBeenSet;

                    /**
                     * [Valid only when UniRecord=3]
Recording Storage Parameters
Corresponds to console parameter "Storage Location." Supports Tencent VOD or COS (exclusively).
Example: {"McuCloudVod":{"McuTencentVod":{"ExpireTime":86400}}}
                     */
                    McuStorageParams m_mcuStorageParams;
                    bool m_mcuStorageParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MCURECORDPARAMS_H_
