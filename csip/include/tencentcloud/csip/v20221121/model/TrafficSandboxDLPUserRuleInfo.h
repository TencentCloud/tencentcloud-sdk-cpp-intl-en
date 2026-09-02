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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXDLPUSERRULEINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXDLPUSERRULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/TrafficSandboxDLPFileSizeRange.h>
#include <tencentcloud/csip/v20221121/model/TrafficSandboxDLPURLRuleItem.h>
#include <tencentcloud/csip/v20221121/model/TrafficSandboxDLPTrafficRuleItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Structured view of DLP user rules, returned by 5 detection dimensions of the detection rule, making it easy for the frontend to render by dimension. Read-only output fields, does not affect Create/Modify input parameters.
                */
                class TrafficSandboxDLPUserRuleInfo : public AbstractModel
                {
                public:
                    TrafficSandboxDLPUserRuleInfo();
                    ~TrafficSandboxDLPUserRuleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取File name match dimension: summarized and deduplicated file name/regular list
                     * @return FileName File name match dimension: summarized and deduplicated file name/regular list
                     * 
                     */
                    std::vector<std::string> GetFileName() const;

                    /**
                     * 设置File name match dimension: summarized and deduplicated file name/regular list
                     * @param _fileName File name match dimension: summarized and deduplicated file name/regular list
                     * 
                     */
                    void SetFileName(const std::vector<std::string>& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取File size limit dimension (interval)
                     * @return FileSize File size limit dimension (interval)
                     * 
                     */
                    TrafficSandboxDLPFileSizeRange GetFileSize() const;

                    /**
                     * 设置File size limit dimension (interval)
                     * @param _fileSize File size limit dimension (interval)
                     * 
                     */
                    void SetFileSize(const TrafficSandboxDLPFileSizeRange& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取File format limited dimensions: format/category list after aggregation and deduplication
                     * @return FileType File format limited dimensions: format/category list after aggregation and deduplication
                     * 
                     */
                    std::vector<std::string> GetFileType() const;

                    /**
                     * 设置File format limited dimensions: format/category list after aggregation and deduplication
                     * @param _fileType File format limited dimensions: format/category list after aggregation and deduplication
                     * 
                     */
                    void SetFileType(const std::vector<std::string>& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取Outbound domain name detection dimension (single Value Object)
                     * @return URLRule Outbound domain name detection dimension (single Value Object)
                     * 
                     */
                    TrafficSandboxDLPURLRuleItem GetURLRule() const;

                    /**
                     * 设置Outbound domain name detection dimension (single Value Object)
                     * @param _uRLRule Outbound domain name detection dimension (single Value Object)
                     * 
                     */
                    void SetURLRule(const TrafficSandboxDLPURLRuleItem& _uRLRule);

                    /**
                     * 判断参数 URLRule 是否已赋值
                     * @return URLRule 是否已赋值
                     * 
                     */
                    bool URLRuleHasBeenSet() const;

                    /**
                     * 获取Outbound content detection dimension (multi-line, name + regular)
                     * @return TrafficRule Outbound content detection dimension (multi-line, name + regular)
                     * 
                     */
                    std::vector<TrafficSandboxDLPTrafficRuleItem> GetTrafficRule() const;

                    /**
                     * 设置Outbound content detection dimension (multi-line, name + regular)
                     * @param _trafficRule Outbound content detection dimension (multi-line, name + regular)
                     * 
                     */
                    void SetTrafficRule(const std::vector<TrafficSandboxDLPTrafficRuleItem>& _trafficRule);

                    /**
                     * 判断参数 TrafficRule 是否已赋值
                     * @return TrafficRule 是否已赋值
                     * 
                     */
                    bool TrafficRuleHasBeenSet() const;

                private:

                    /**
                     * File name match dimension: summarized and deduplicated file name/regular list
                     */
                    std::vector<std::string> m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * File size limit dimension (interval)
                     */
                    TrafficSandboxDLPFileSizeRange m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * File format limited dimensions: format/category list after aggregation and deduplication
                     */
                    std::vector<std::string> m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * Outbound domain name detection dimension (single Value Object)
                     */
                    TrafficSandboxDLPURLRuleItem m_uRLRule;
                    bool m_uRLRuleHasBeenSet;

                    /**
                     * Outbound content detection dimension (multi-line, name + regular)
                     */
                    std::vector<TrafficSandboxDLPTrafficRuleItem> m_trafficRule;
                    bool m_trafficRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXDLPUSERRULEINFO_H_
