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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_CREATEGLOSSARYENTRIESREQUEST_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_CREATEGLOSSARYENTRIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tokenhub/v20260322/model/GlossaryEntryInput.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * CreateGlossaryEntries request structure.
                */
                class CreateGlossaryEntriesRequest : public AbstractModel
                {
                public:
                    CreateGlossaryEntriesRequest();
                    ~CreateGlossaryEntriesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Termbase ID. Obtain through the API DescribeGlossaries.
                     * @return GlossaryId Termbase ID. Obtain through the API DescribeGlossaries.
                     * 
                     */
                    std::string GetGlossaryId() const;

                    /**
                     * 设置Termbase ID. Obtain through the API DescribeGlossaries.
                     * @param _glossaryId Termbase ID. Obtain through the API DescribeGlossaries.
                     * 
                     */
                    void SetGlossaryId(const std::string& _glossaryId);

                    /**
                     * 判断参数 GlossaryId 是否已赋值
                     * @return GlossaryId 是否已赋值
                     * 
                     */
                    bool GlossaryIdHasBeenSet() const;

                    /**
                     * 获取Terminology entry list. At a time 100.
                     * @return Entries Terminology entry list. At a time 100.
                     * 
                     */
                    std::vector<GlossaryEntryInput> GetEntries() const;

                    /**
                     * 设置Terminology entry list. At a time 100.
                     * @param _entries Terminology entry list. At a time 100.
                     * 
                     */
                    void SetEntries(const std::vector<GlossaryEntryInput>& _entries);

                    /**
                     * 判断参数 Entries 是否已赋值
                     * @return Entries 是否已赋值
                     * 
                     */
                    bool EntriesHasBeenSet() const;

                private:

                    /**
                     * Termbase ID. Obtain through the API DescribeGlossaries.
                     */
                    std::string m_glossaryId;
                    bool m_glossaryIdHasBeenSet;

                    /**
                     * Terminology entry list. At a time 100.
                     */
                    std::vector<GlossaryEntryInput> m_entries;
                    bool m_entriesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_CREATEGLOSSARYENTRIESREQUEST_H_
