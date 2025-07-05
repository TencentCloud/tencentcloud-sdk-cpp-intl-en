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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_CREATERECONSTRUCTDOCUMENTFLOWCONFIG_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_CREATERECONSTRUCTDOCUMENTFLOWCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Configuration information for creating a smart document parsing task.
                */
                class CreateReconstructDocumentFlowConfig : public AbstractModel
                {
                public:
                    CreateReconstructDocumentFlowConfig();
                    ~CreateReconstructDocumentFlowConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The returned form of a table in a markdown file: 
0: the table is returned in MD format;
1: the table is returned in HTML form.
The default is 1.
                     * @return TableResultType The returned form of a table in a markdown file: 
0: the table is returned in MD format;
1: the table is returned in HTML form.
The default is 1.
                     * 
                     */
                    std::string GetTableResultType() const;

                    /**
                     * 设置The returned form of a table in a markdown file: 
0: the table is returned in MD format;
1: the table is returned in HTML form.
The default is 1.
                     * @param _tableResultType The returned form of a table in a markdown file: 
0: the table is returned in MD format;
1: the table is returned in HTML form.
The default is 1.
                     * 
                     */
                    void SetTableResultType(const std::string& _tableResultType);

                    /**
                     * 判断参数 TableResultType 是否已赋值
                     * @return TableResultType 是否已赋值
                     * 
                     */
                    bool TableResultTypeHasBeenSet() const;

                    /**
                     * 获取The format of smart document parsing results:
0: only return full-text MD;
1: only return OCR original JSON of each page;.
2: only return MD of each page;
3: return full-text MD + OCR original JSON of each page;.
4: return full-text MD + MD of each page.
The default value is 3 (return full-text MD + OCR original JSON of each page).

                     * @return ResultType The format of smart document parsing results:
0: only return full-text MD;
1: only return OCR original JSON of each page;.
2: only return MD of each page;
3: return full-text MD + OCR original JSON of each page;.
4: return full-text MD + MD of each page.
The default value is 3 (return full-text MD + OCR original JSON of each page).

                     * 
                     */
                    std::string GetResultType() const;

                    /**
                     * 设置The format of smart document parsing results:
0: only return full-text MD;
1: only return OCR original JSON of each page;.
2: only return MD of each page;
3: return full-text MD + OCR original JSON of each page;.
4: return full-text MD + MD of each page.
The default value is 3 (return full-text MD + OCR original JSON of each page).

                     * @param _resultType The format of smart document parsing results:
0: only return full-text MD;
1: only return OCR original JSON of each page;.
2: only return MD of each page;
3: return full-text MD + OCR original JSON of each page;.
4: return full-text MD + MD of each page.
The default value is 3 (return full-text MD + OCR original JSON of each page).

                     * 
                     */
                    void SetResultType(const std::string& _resultType);

                    /**
                     * 判断参数 ResultType 是否已赋值
                     * @return ResultType 是否已赋值
                     * 
                     */
                    bool ResultTypeHasBeenSet() const;

                private:

                    /**
                     * The returned form of a table in a markdown file: 
0: the table is returned in MD format;
1: the table is returned in HTML form.
The default is 1.
                     */
                    std::string m_tableResultType;
                    bool m_tableResultTypeHasBeenSet;

                    /**
                     * The format of smart document parsing results:
0: only return full-text MD;
1: only return OCR original JSON of each page;.
2: only return MD of each page;
3: return full-text MD + OCR original JSON of each page;.
4: return full-text MD + MD of each page.
The default value is 3 (return full-text MD + OCR original JSON of each page).

                     */
                    std::string m_resultType;
                    bool m_resultTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_CREATERECONSTRUCTDOCUMENTFLOWCONFIG_H_
