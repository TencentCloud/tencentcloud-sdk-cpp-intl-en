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
                * Collection configuration.
                */
                class HighlightInfo : public AbstractModel
                {
                public:
                    HighlightInfo();
                    ~HighlightInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable input recognition 0: Disable 1 Enable Default value 0 Disable.
                     * @return HighlightEnabled Whether to enable input recognition 0: Disable 1 Enable Default value 0 Disable.
                     * 
                     */
                    uint64_t GetHighlightEnabled() const;

                    /**
                     * 设置Whether to enable input recognition 0: Disable 1 Enable Default value 0 Disable.
                     * @param _highlightEnabled Whether to enable input recognition 0: Disable 1 Enable Default value 0 Disable.
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
                     * 获取The product where the results are saved, optional: COS. Currently, only Tencent Cloud COS is supported. In the future, it will be connected to AWS S3 and COS will be used by default.
                     * @return Type The product where the results are saved, optional: COS. Currently, only Tencent Cloud COS is supported. In the future, it will be connected to AWS S3 and COS will be used by default.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置The product where the results are saved, optional: COS. Currently, only Tencent Cloud COS is supported. In the future, it will be connected to AWS S3 and COS will be used by default.
                     * @param _type The product where the results are saved, optional: COS. Currently, only Tencent Cloud COS is supported. In the future, it will be connected to AWS S3 and COS will be used by default.
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
                     * 获取Valid when Type is COS, the region where COS is stored.
                     * @return Region Valid when Type is COS, the region where COS is stored.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Valid when Type is COS, the region where COS is stored.
                     * @param _region Valid when Type is COS, the region where COS is stored.
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
                     * 获取Valid when Type is COS, the bucket name stored in COS.
                     * @return Bucket Valid when Type is COS, the bucket name stored in COS.
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置Valid when Type is COS, the bucket name stored in COS.
                     * @param _bucket Valid when Type is COS, the bucket name stored in COS.
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
                     * 获取Valid when Type is COS, the path where cos is stored.
                     * @return Path Valid when Type is COS, the path where cos is stored.
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置Valid when Type is COS, the path where cos is stored.
                     * @param _path Valid when Type is COS, the path where cos is stored.
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
                     * 获取Valid when Type is COS, the file name stored in cos.
                     * @return Filename Valid when Type is COS, the file name stored in cos.
                     * 
                     */
                    std::string GetFilename() const;

                    /**
                     * 设置Valid when Type is COS, the file name stored in cos.
                     * @param _filename Valid when Type is COS, the file name stored in cos.
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
                     * 获取Valid when Type is COS, the file name suffix stored in COS is automatically generated in the time format, optional values: unix, utc. Unix is the second-level timestamp and UTC is the year, month and day represented by the zero time zone.
                     * @return TimestampFormat Valid when Type is COS, the file name suffix stored in COS is automatically generated in the time format, optional values: unix, utc. Unix is the second-level timestamp and UTC is the year, month and day represented by the zero time zone.
                     * 
                     */
                    std::string GetTimestampFormat() const;

                    /**
                     * 设置Valid when Type is COS, the file name suffix stored in COS is automatically generated in the time format, optional values: unix, utc. Unix is the second-level timestamp and UTC is the year, month and day represented by the zero time zone.
                     * @param _timestampFormat Valid when Type is COS, the file name suffix stored in COS is automatically generated in the time format, optional values: unix, utc. Unix is the second-level timestamp and UTC is the year, month and day represented by the zero time zone.
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
                     * 获取Audio selector list is optional and can be empty. If not filled in, an audio will be used as the output of the recognition result by default.
                     * @return AudioSelectorNames Audio selector list is optional and can be empty. If not filled in, an audio will be used as the output of the recognition result by default.
                     * 
                     */
                    std::vector<std::string> GetAudioSelectorNames() const;

                    /**
                     * 设置Audio selector list is optional and can be empty. If not filled in, an audio will be used as the output of the recognition result by default.
                     * @param _audioSelectorNames Audio selector list is optional and can be empty. If not filled in, an audio will be used as the output of the recognition result by default.
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
                     * Whether to enable input recognition 0: Disable 1 Enable Default value 0 Disable.
                     */
                    uint64_t m_highlightEnabled;
                    bool m_highlightEnabledHasBeenSet;

                    /**
                     * The product where the results are saved, optional: COS. Currently, only Tencent Cloud COS is supported. In the future, it will be connected to AWS S3 and COS will be used by default.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Valid when Type is COS, the region where COS is stored.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Valid when Type is COS, the bucket name stored in COS.
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * Valid when Type is COS, the path where cos is stored.
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * Valid when Type is COS, the file name stored in cos.
                     */
                    std::string m_filename;
                    bool m_filenameHasBeenSet;

                    /**
                     * Valid when Type is COS, the file name suffix stored in COS is automatically generated in the time format, optional values: unix, utc. Unix is the second-level timestamp and UTC is the year, month and day represented by the zero time zone.
                     */
                    std::string m_timestampFormat;
                    bool m_timestampFormatHasBeenSet;

                    /**
                     * Audio selector list is optional and can be empty. If not filled in, an audio will be used as the output of the recognition result by default.
                     */
                    std::vector<std::string> m_audioSelectorNames;
                    bool m_audioSelectorNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_HIGHLIGHTINFO_H_
