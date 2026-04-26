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
                * Relay recording parameters.
                */
                class McuRecordParams : public AbstractModel
                {
                public:
                    McuRecordParams();
                    ~McuRecordParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Retweet recording mode. 
0/Leave blank: not currently supported; behavior is undefined.
1: disable recording.
2: enable recording (via console automatic recording template parameters, see: [redirection document](https://www.tencentcloud.comom/document/product/647/111748?from_cn_redirect=1#.E5.BD.95.E5.88.B6.E6.8E.A7.E5.88.B6.E6.96.B9.E6.A1.88));.
3: enable recording (use API to specify parameter).
                     * @return UniRecord Retweet recording mode. 
0/Leave blank: not currently supported; behavior is undefined.
1: disable recording.
2: enable recording (via console automatic recording template parameters, see: [redirection document](https://www.tencentcloud.comom/document/product/647/111748?from_cn_redirect=1#.E5.BD.95.E5.88.B6.E6.8E.A7.E5.88.B6.E6.96.B9.E6.A1.88));.
3: enable recording (use API to specify parameter).
                     * 
                     */
                    uint64_t GetUniRecord() const;

                    /**
                     * 设置Retweet recording mode. 
0/Leave blank: not currently supported; behavior is undefined.
1: disable recording.
2: enable recording (via console automatic recording template parameters, see: [redirection document](https://www.tencentcloud.comom/document/product/647/111748?from_cn_redirect=1#.E5.BD.95.E5.88.B6.E6.8E.A7.E5.88.B6.E6.96.B9.E6.A1.88));.
3: enable recording (use API to specify parameter).
                     * @param _uniRecord Retweet recording mode. 
0/Leave blank: not currently supported; behavior is undefined.
1: disable recording.
2: enable recording (via console automatic recording template parameters, see: [redirection document](https://www.tencentcloud.comom/document/product/647/111748?from_cn_redirect=1#.E5.BD.95.E5.88.B6.E6.8E.A7.E5.88.B6.E6.96.B9.E6.A1.88));.
3: enable recording (use API to specify parameter).
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
                     * 获取Recording task key, identifies a recording task. you can record multiple relay tasks into a file by specifying this parameter. if this parameter is not specified, only the current relay task is recorded.
Limit length to 128 bytes, only allow a combination of uppercase and lowercase letters (a-zA-Z), digits (0-9), underscores (_), and hyphens (-).
                     * @return RecordKey Recording task key, identifies a recording task. you can record multiple relay tasks into a file by specifying this parameter. if this parameter is not specified, only the current relay task is recorded.
Limit length to 128 bytes, only allow a combination of uppercase and lowercase letters (a-zA-Z), digits (0-9), underscores (_), and hyphens (-).
                     * 
                     */
                    std::string GetRecordKey() const;

                    /**
                     * 设置Recording task key, identifies a recording task. you can record multiple relay tasks into a file by specifying this parameter. if this parameter is not specified, only the current relay task is recorded.
Limit length to 128 bytes, only allow a combination of uppercase and lowercase letters (a-zA-Z), digits (0-9), underscores (_), and hyphens (-).
                     * @param _recordKey Recording task key, identifies a recording task. you can record multiple relay tasks into a file by specifying this parameter. if this parameter is not specified, only the current relay task is recorded.
Limit length to 128 bytes, only allow a combination of uppercase and lowercase letters (a-zA-Z), digits (0-9), underscores (_), and hyphens (-).
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
                     * 获取[Valid only when UniRecord=3.].
Resume recording waiting time, corresponding to the "wait time for resumption" in the recording template, unit: seconds. the value must be greater than or equal to 5 and less than or equal to 86400 (24 hours), with a default value of 30. when resumption is enabled, the recording task ends automatically if idle for a duration exceeding RecordWaitTime.
                     * @return RecordWaitTime [Valid only when UniRecord=3.].
Resume recording waiting time, corresponding to the "wait time for resumption" in the recording template, unit: seconds. the value must be greater than or equal to 5 and less than or equal to 86400 (24 hours), with a default value of 30. when resumption is enabled, the recording task ends automatically if idle for a duration exceeding RecordWaitTime.
                     * 
                     */
                    uint64_t GetRecordWaitTime() const;

                    /**
                     * 设置[Valid only when UniRecord=3.].
Resume recording waiting time, corresponding to the "wait time for resumption" in the recording template, unit: seconds. the value must be greater than or equal to 5 and less than or equal to 86400 (24 hours), with a default value of 30. when resumption is enabled, the recording task ends automatically if idle for a duration exceeding RecordWaitTime.
                     * @param _recordWaitTime [Valid only when UniRecord=3.].
Resume recording waiting time, corresponding to the "wait time for resumption" in the recording template, unit: seconds. the value must be greater than or equal to 5 and less than or equal to 86400 (24 hours), with a default value of 30. when resumption is enabled, the recording task ends automatically if idle for a duration exceeding RecordWaitTime.
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
                     * 获取[Valid only when UniRecord=3.].
The list of output file formats for recording corresponds to the "file format" in the recording template. it supports three formats: "hls", "mp4", and "aac". the default value is "mp4". among them, "mp4" and "aac" formats cannot be specified simultaneously.
Record only the mp4 format, example value: ["mp4"]. record both mp4 and HLS formats simultaneously, example value: ["mp4","HLS"].
                     * @return RecordFormat [Valid only when UniRecord=3.].
The list of output file formats for recording corresponds to the "file format" in the recording template. it supports three formats: "hls", "mp4", and "aac". the default value is "mp4". among them, "mp4" and "aac" formats cannot be specified simultaneously.
Record only the mp4 format, example value: ["mp4"]. record both mp4 and HLS formats simultaneously, example value: ["mp4","HLS"].
                     * 
                     */
                    std::vector<std::string> GetRecordFormat() const;

                    /**
                     * 设置[Valid only when UniRecord=3.].
The list of output file formats for recording corresponds to the "file format" in the recording template. it supports three formats: "hls", "mp4", and "aac". the default value is "mp4". among them, "mp4" and "aac" formats cannot be specified simultaneously.
Record only the mp4 format, example value: ["mp4"]. record both mp4 and HLS formats simultaneously, example value: ["mp4","HLS"].
                     * @param _recordFormat [Valid only when UniRecord=3.].
The list of output file formats for recording corresponds to the "file format" in the recording template. it supports three formats: "hls", "mp4", and "aac". the default value is "mp4". among them, "mp4" and "aac" formats cannot be specified simultaneously.
Record only the mp4 format, example value: ["mp4"]. record both mp4 and HLS formats simultaneously, example value: ["mp4","HLS"].
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
                     * 获取[Valid only when UniRecord=3.].
Single file recording duration, corresponding to the "max recording time per file" in the recording template, unit: minutes. the value must be greater than or equal to 1 and less than or equal to 1440 (24 hours), with a default value of 1440. it only takes effect for "mp4" or "aac" format. the actual single file recording duration is also limited by the file size not exceeding 2G. if it exceeds 2G, the file will be forcibly split.
                     * @return MaxMediaFileDuration [Valid only when UniRecord=3.].
Single file recording duration, corresponding to the "max recording time per file" in the recording template, unit: minutes. the value must be greater than or equal to 1 and less than or equal to 1440 (24 hours), with a default value of 1440. it only takes effect for "mp4" or "aac" format. the actual single file recording duration is also limited by the file size not exceeding 2G. if it exceeds 2G, the file will be forcibly split.
                     * 
                     */
                    uint64_t GetMaxMediaFileDuration() const;

                    /**
                     * 设置[Valid only when UniRecord=3.].
Single file recording duration, corresponding to the "max recording time per file" in the recording template, unit: minutes. the value must be greater than or equal to 1 and less than or equal to 1440 (24 hours), with a default value of 1440. it only takes effect for "mp4" or "aac" format. the actual single file recording duration is also limited by the file size not exceeding 2G. if it exceeds 2G, the file will be forcibly split.
                     * @param _maxMediaFileDuration [Valid only when UniRecord=3.].
Single file recording duration, corresponding to the "max recording time per file" in the recording template, unit: minutes. the value must be greater than or equal to 1 and less than or equal to 1440 (24 hours), with a default value of 1440. it only takes effect for "mp4" or "aac" format. the actual single file recording duration is also limited by the file size not exceeding 2G. if it exceeds 2G, the file will be forcibly split.
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
                     * 获取[Valid only when UniRecord=3.].
The audio and video type of the recording corresponds to the "recording format" in the recording template. valid values: 0 (audio and video), 1 (pure audio), 2 (video only). the final recording file content is the intersection of the specified type and the relayed content.
                     * @return StreamType [Valid only when UniRecord=3.].
The audio and video type of the recording corresponds to the "recording format" in the recording template. valid values: 0 (audio and video), 1 (pure audio), 2 (video only). the final recording file content is the intersection of the specified type and the relayed content.
                     * 
                     */
                    uint64_t GetStreamType() const;

                    /**
                     * 设置[Valid only when UniRecord=3.].
The audio and video type of the recording corresponds to the "recording format" in the recording template. valid values: 0 (audio and video), 1 (pure audio), 2 (video only). the final recording file content is the intersection of the specified type and the relayed content.
                     * @param _streamType [Valid only when UniRecord=3.].
The audio and video type of the recording corresponds to the "recording format" in the recording template. valid values: 0 (audio and video), 1 (pure audio), 2 (video only). the final recording file content is the intersection of the specified type and the relayed content.
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
                     * 获取Recording file name prefix, no more than 64 characters. this parameter is valid only when store is vod.
Limit length to 64 bytes, only allow a combination of uppercase and lowercase letters (a-zA-Z), digits (0-9), underscores (_), and hyphens (-).
                     * @return UserDefineRecordPrefix Recording file name prefix, no more than 64 characters. this parameter is valid only when store is vod.
Limit length to 64 bytes, only allow a combination of uppercase and lowercase letters (a-zA-Z), digits (0-9), underscores (_), and hyphens (-).
                     * 
                     */
                    std::string GetUserDefineRecordPrefix() const;

                    /**
                     * 设置Recording file name prefix, no more than 64 characters. this parameter is valid only when store is vod.
Limit length to 64 bytes, only allow a combination of uppercase and lowercase letters (a-zA-Z), digits (0-9), underscores (_), and hyphens (-).
                     * @param _userDefineRecordPrefix Recording file name prefix, no more than 64 characters. this parameter is valid only when store is vod.
Limit length to 64 bytes, only allow a combination of uppercase and lowercase letters (a-zA-Z), digits (0-9), underscores (_), and hyphens (-).
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
                     * 获取[Valid only when UniRecord=3.].
Recording files storage parameters, corresponding console "storage location" and related parameters. currently supports VOD and COS storage methods. only one can be filled.
                     * @return McuStorageParams [Valid only when UniRecord=3.].
Recording files storage parameters, corresponding console "storage location" and related parameters. currently supports VOD and COS storage methods. only one can be filled.
                     * 
                     */
                    McuStorageParams GetMcuStorageParams() const;

                    /**
                     * 设置[Valid only when UniRecord=3.].
Recording files storage parameters, corresponding console "storage location" and related parameters. currently supports VOD and COS storage methods. only one can be filled.
                     * @param _mcuStorageParams [Valid only when UniRecord=3.].
Recording files storage parameters, corresponding console "storage location" and related parameters. currently supports VOD and COS storage methods. only one can be filled.
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
                     * Retweet recording mode. 
0/Leave blank: not currently supported; behavior is undefined.
1: disable recording.
2: enable recording (via console automatic recording template parameters, see: [redirection document](https://www.tencentcloud.comom/document/product/647/111748?from_cn_redirect=1#.E5.BD.95.E5.88.B6.E6.8E.A7.E5.88.B6.E6.96.B9.E6.A1.88));.
3: enable recording (use API to specify parameter).
                     */
                    uint64_t m_uniRecord;
                    bool m_uniRecordHasBeenSet;

                    /**
                     * Recording task key, identifies a recording task. you can record multiple relay tasks into a file by specifying this parameter. if this parameter is not specified, only the current relay task is recorded.
Limit length to 128 bytes, only allow a combination of uppercase and lowercase letters (a-zA-Z), digits (0-9), underscores (_), and hyphens (-).
                     */
                    std::string m_recordKey;
                    bool m_recordKeyHasBeenSet;

                    /**
                     * [Valid only when UniRecord=3.].
Resume recording waiting time, corresponding to the "wait time for resumption" in the recording template, unit: seconds. the value must be greater than or equal to 5 and less than or equal to 86400 (24 hours), with a default value of 30. when resumption is enabled, the recording task ends automatically if idle for a duration exceeding RecordWaitTime.
                     */
                    uint64_t m_recordWaitTime;
                    bool m_recordWaitTimeHasBeenSet;

                    /**
                     * [Valid only when UniRecord=3.].
The list of output file formats for recording corresponds to the "file format" in the recording template. it supports three formats: "hls", "mp4", and "aac". the default value is "mp4". among them, "mp4" and "aac" formats cannot be specified simultaneously.
Record only the mp4 format, example value: ["mp4"]. record both mp4 and HLS formats simultaneously, example value: ["mp4","HLS"].
                     */
                    std::vector<std::string> m_recordFormat;
                    bool m_recordFormatHasBeenSet;

                    /**
                     * [Valid only when UniRecord=3.].
Single file recording duration, corresponding to the "max recording time per file" in the recording template, unit: minutes. the value must be greater than or equal to 1 and less than or equal to 1440 (24 hours), with a default value of 1440. it only takes effect for "mp4" or "aac" format. the actual single file recording duration is also limited by the file size not exceeding 2G. if it exceeds 2G, the file will be forcibly split.
                     */
                    uint64_t m_maxMediaFileDuration;
                    bool m_maxMediaFileDurationHasBeenSet;

                    /**
                     * [Valid only when UniRecord=3.].
The audio and video type of the recording corresponds to the "recording format" in the recording template. valid values: 0 (audio and video), 1 (pure audio), 2 (video only). the final recording file content is the intersection of the specified type and the relayed content.
                     */
                    uint64_t m_streamType;
                    bool m_streamTypeHasBeenSet;

                    /**
                     * Recording file name prefix, no more than 64 characters. this parameter is valid only when store is vod.
Limit length to 64 bytes, only allow a combination of uppercase and lowercase letters (a-zA-Z), digits (0-9), underscores (_), and hyphens (-).
                     */
                    std::string m_userDefineRecordPrefix;
                    bool m_userDefineRecordPrefixHasBeenSet;

                    /**
                     * [Valid only when UniRecord=3.].
Recording files storage parameters, corresponding console "storage location" and related parameters. currently supports VOD and COS storage methods. only one can be filled.
                     */
                    McuStorageParams m_mcuStorageParams;
                    bool m_mcuStorageParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MCURECORDPARAMS_H_
