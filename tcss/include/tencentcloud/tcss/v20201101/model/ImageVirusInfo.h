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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEVIRUSINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEVIRUSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Information of a virus in the image
                */
                class ImageVirusInfo : public AbstractModel
                {
                public:
                    ImageVirusInfo();
                    ~ImageVirusInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Path
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Path Path
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置Path
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _path Path
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Risk level
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RiskLevel Risk level
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetRiskLevel() const;

                    /**
                     * 设置Risk level
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _riskLevel Risk level
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRiskLevel(const uint64_t& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取Virus name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VirusName Virus name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVirusName() const;

                    /**
                     * 设置Virus name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _virusName Virus name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVirusName(const std::string& _virusName);

                    /**
                     * 判断参数 VirusName 是否已赋值
                     * @return VirusName 是否已赋值
                     * 
                     */
                    bool VirusNameHasBeenSet() const;

                    /**
                     * 获取Tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tags Tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置Tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tags Tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Desc Description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置Description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _desc Description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取Fix suggestion
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Solution Fix suggestion
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSolution() const;

                    /**
                     * 设置Fix suggestion
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _solution Fix suggestion
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSolution(const std::string& _solution);

                    /**
                     * 判断参数 Solution 是否已赋值
                     * @return Solution 是否已赋值
                     * 
                     */
                    bool SolutionHasBeenSet() const;

                    /**
                     * 获取Size
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Size Size
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetSize() const;

                    /**
                     * 设置Size
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _size Size
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSize(const uint64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取First discovery time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FirstScanTime First discovery time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFirstScanTime() const;

                    /**
                     * 设置First discovery time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _firstScanTime First discovery time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFirstScanTime(const std::string& _firstScanTime);

                    /**
                     * 判断参数 FirstScanTime 是否已赋值
                     * @return FirstScanTime 是否已赋值
                     * 
                     */
                    bool FirstScanTimeHasBeenSet() const;

                    /**
                     * 获取Last scan time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LatestScanTime Last scan time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLatestScanTime() const;

                    /**
                     * 设置Last scan time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _latestScanTime Last scan time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLatestScanTime(const std::string& _latestScanTime);

                    /**
                     * 判断参数 LatestScanTime 是否已赋值
                     * @return LatestScanTime 是否已赋值
                     * 
                     */
                    bool LatestScanTimeHasBeenSet() const;

                    /**
                     * 获取MD5 checksum of the file
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Md5 MD5 checksum of the file
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMd5() const;

                    /**
                     * 设置MD5 checksum of the file
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _md5 MD5 checksum of the file
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMd5(const std::string& _md5);

                    /**
                     * 判断参数 Md5 是否已赋值
                     * @return Md5 是否已赋值
                     * 
                     */
                    bool Md5HasBeenSet() const;

                    /**
                     * 获取Filename
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FileName Filename
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置Filename
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fileName Filename
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Check platform
`1`: Tencent Cloud Security Engine.
`2`: tav.
`3`: binaryAi.
`4`: Unusual behavior.
`5`: Threat intelligence.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CheckPlatform Check platform
`1`: Tencent Cloud Security Engine.
`2`: tav.
`3`: binaryAi.
`4`: Unusual behavior.
`5`: Threat intelligence.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetCheckPlatform() const;

                    /**
                     * 设置Check platform
`1`: Tencent Cloud Security Engine.
`2`: tav.
`3`: binaryAi.
`4`: Unusual behavior.
`5`: Threat intelligence.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _checkPlatform Check platform
`1`: Tencent Cloud Security Engine.
`2`: tav.
`3`: binaryAi.
`4`: Unusual behavior.
`5`: Threat intelligence.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCheckPlatform(const std::vector<std::string>& _checkPlatform);

                    /**
                     * 判断参数 CheckPlatform 是否已赋值
                     * @return CheckPlatform 是否已赋值
                     * 
                     */
                    bool CheckPlatformHasBeenSet() const;

                private:

                    /**
                     * Path
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * Risk level
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * Virus name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_virusName;
                    bool m_virusNameHasBeenSet;

                    /**
                     * Tag
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * Fix suggestion
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_solution;
                    bool m_solutionHasBeenSet;

                    /**
                     * Size
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * First discovery time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_firstScanTime;
                    bool m_firstScanTimeHasBeenSet;

                    /**
                     * Last scan time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_latestScanTime;
                    bool m_latestScanTimeHasBeenSet;

                    /**
                     * MD5 checksum of the file
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                    /**
                     * Filename
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * Check platform
`1`: Tencent Cloud Security Engine.
`2`: tav.
`3`: binaryAi.
`4`: Unusual behavior.
`5`: Threat intelligence.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_checkPlatform;
                    bool m_checkPlatformHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEVIRUSINFO_H_
