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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_HIGHLIGHTINFO_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_HIGHLIGHTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * Highlight configuration.
                */
                class HighlightInfo : public AbstractModel
                {
                public:
                    HighlightInfo();
                    ~HighlightInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable input recognition  0: disabled  1: enabled  Default value: 0.
                     * @return HighlightEnabled Whether to enable input recognition  0: disabled  1: enabled  Default value: 0.
                     * 
                     */
                    uint64_t GetHighlightEnabled() const;

                    /**
                     * 设置Whether to enable input recognition  0: disabled  1: enabled  Default value: 0.
                     * @param _highlightEnabled Whether to enable input recognition  0: disabled  1: enabled  Default value: 0.
                     * 
                     */
                    void SetHighlightEnabled(const uint64_t& _highlightEnabled);

                    /**
                     * 判断参数 HighlightEnabled 是否已赋值
                     * @return HighlightEnabled 是否已赋值
                     * 
                     */
                    bool HighlightEnabledHasBeenSet() const;

                    /**
                     * 获取Products to save results. Option: COS.
Currently supports Tencent Cloud COS only. AWS S3 integration will be supported later. Default is COS.
                     * @return Type Products to save results. Option: COS.
Currently supports Tencent Cloud COS only. AWS S3 integration will be supported later. Default is COS.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Products to save results. Option: COS.
Currently supports Tencent Cloud COS only. AWS S3 integration will be supported later. Default is COS.
                     * @param _type Products to save results. Option: COS.
Currently supports Tencent Cloud COS only. AWS S3 integration will be supported later. Default is COS.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Valid when Type is COS. Region of COS storage.
                     * @return Region Valid when Type is COS. Region of COS storage.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Valid when Type is COS. Region of COS storage.
                     * @param _region Valid when Type is COS. Region of COS storage.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Valid when Type is COS. Bucket name of COS storage.
                     * @return Bucket Valid when Type is COS. Bucket name of COS storage.
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置Valid when Type is COS. Bucket name of COS storage.
                     * @param _bucket Valid when Type is COS. Bucket name of COS storage.
                     * 
                     */
                    void SetBucket(const std::string& _bucket);

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     * 
                     */
                    bool BucketHasBeenSet() const;

                    /**
                     * 获取Valid when Type is COS. Path of COS storage.
                     * @return Path Valid when Type is COS. Path of COS storage.
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置Valid when Type is COS. Path of COS storage.
                     * @param _path Valid when Type is COS. Path of COS storage.
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取Valid when Type is COS. Name of the stored file in COS.
                     * @return Filename Valid when Type is COS. Name of the stored file in COS.
                     * 
                     */
                    std::string GetFilename() const;

                    /**
                     * 设置Valid when Type is COS. Name of the stored file in COS.
                     * @param _filename Valid when Type is COS. Name of the stored file in COS.
                     * 
                     */
                    void SetFilename(const std::string& _filename);

                    /**
                     * 判断参数 Filename 是否已赋值
                     * @return Filename 是否已赋值
                     * 
                     */
                    bool FilenameHasBeenSet() const;

                    /**
                     * 获取Valid when Type is COS. The file extension of COS storage is automatically generated in time format. Available values: unix, utc.
unix is a second-level timestamp. utc 0 represents the year, month, day.
                     * @return TimestampFormat Valid when Type is COS. The file extension of COS storage is automatically generated in time format. Available values: unix, utc.
unix is a second-level timestamp. utc 0 represents the year, month, day.
                     * 
                     */
                    std::string GetTimestampFormat() const;

                    /**
                     * 设置Valid when Type is COS. The file extension of COS storage is automatically generated in time format. Available values: unix, utc.
unix is a second-level timestamp. utc 0 represents the year, month, day.
                     * @param _timestampFormat Valid when Type is COS. The file extension of COS storage is automatically generated in time format. Available values: unix, utc.
unix is a second-level timestamp. utc 0 represents the year, month, day.
                     * 
                     */
                    void SetTimestampFormat(const std::string& _timestampFormat);

                    /**
                     * 判断参数 TimestampFormat 是否已赋值
                     * @return TimestampFormat 是否已赋值
                     * 
                     */
                    bool TimestampFormatHasBeenSet() const;

                    /**
                     * 获取Audio selector list, selectable, can be left blank. By default, an audio is used as the output of the recognition result.
                     * @return AudioSelectorNames Audio selector list, selectable, can be left blank. By default, an audio is used as the output of the recognition result.
                     * 
                     */
                    std::vector<std::string> GetAudioSelectorNames() const;

                    /**
                     * 设置Audio selector list, selectable, can be left blank. By default, an audio is used as the output of the recognition result.
                     * @param _audioSelectorNames Audio selector list, selectable, can be left blank. By default, an audio is used as the output of the recognition result.
                     * 
                     */
                    void SetAudioSelectorNames(const std::vector<std::string>& _audioSelectorNames);

                    /**
                     * 判断参数 AudioSelectorNames 是否已赋值
                     * @return AudioSelectorNames 是否已赋值
                     * 
                     */
                    bool AudioSelectorNamesHasBeenSet() const;

                private:

                    /**
                     * Whether to enable input recognition  0: disabled  1: enabled  Default value: 0.
                     */
                    uint64_t m_highlightEnabled;
                    bool m_highlightEnabledHasBeenSet;

                    /**
                     * Products to save results. Option: COS.
Currently supports Tencent Cloud COS only. AWS S3 integration will be supported later. Default is COS.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Valid when Type is COS. Region of COS storage.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Valid when Type is COS. Bucket name of COS storage.
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * Valid when Type is COS. Path of COS storage.
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * Valid when Type is COS. Name of the stored file in COS.
                     */
                    std::string m_filename;
                    bool m_filenameHasBeenSet;

                    /**
                     * Valid when Type is COS. The file extension of COS storage is automatically generated in time format. Available values: unix, utc.
unix is a second-level timestamp. utc 0 represents the year, month, day.
                     */
                    std::string m_timestampFormat;
                    bool m_timestampFormatHasBeenSet;

                    /**
                     * Audio selector list, selectable, can be left blank. By default, an audio is used as the output of the recognition result.
                     */
                    std::vector<std::string> m_audioSelectorNames;
                    bool m_audioSelectorNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_HIGHLIGHTINFO_H_
