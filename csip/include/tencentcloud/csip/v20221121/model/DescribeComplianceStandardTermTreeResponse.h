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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECOMPLIANCESTANDARDTERMTREERESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECOMPLIANCESTANDARDTERMTREERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/ComplianceChapterItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeComplianceStandardTermTree response structure.
                */
                class DescribeComplianceStandardTermTreeResponse : public AbstractModel
                {
                public:
                    DescribeComplianceStandardTermTreeResponse();
                    ~DescribeComplianceStandardTermTreeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Compliance standard ID</p>
                     * @return StandardID <p>Compliance standard ID</p>
                     * 
                     */
                    uint64_t GetStandardID() const;

                    /**
                     * 判断参数 StandardID 是否已赋值
                     * @return StandardID 是否已赋值
                     * 
                     */
                    bool StandardIDHasBeenSet() const;

                    /**
                     * 获取<p>Specification name</p>
                     * @return Name <p>Specification name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>Clause chapter</p>
                     * @return Chapters <p>Clause chapter</p>
                     * 
                     */
                    std::vector<ComplianceChapterItem> GetChapters() const;

                    /**
                     * 判断参数 Chapters 是否已赋值
                     * @return Chapters 是否已赋值
                     * 
                     */
                    bool ChaptersHasBeenSet() const;

                private:

                    /**
                     * <p>Compliance standard ID</p>
                     */
                    uint64_t m_standardID;
                    bool m_standardIDHasBeenSet;

                    /**
                     * <p>Specification name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Clause chapter</p>
                     */
                    std::vector<ComplianceChapterItem> m_chapters;
                    bool m_chaptersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECOMPLIANCESTANDARDTERMTREERESPONSE_H_
