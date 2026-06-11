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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DLCFILEDINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DLCFILEDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Data Lake Computing Service (Data Lake Compute, DLC) data field configuration message
                */
                class DlcFiledInfo : public AbstractModel
                {
                public:
                    DlcFiledInfo();
                    ~DlcFiledInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Field name in the cls log</p>
                     * @return ClsField <p>Field name in the cls log</p>
                     * 
                     */
                    std::string GetClsField() const;

                    /**
                     * 设置<p>Field name in the cls log</p>
                     * @param _clsField <p>Field name in the cls log</p>
                     * 
                     */
                    void SetClsField(const std::string& _clsField);

                    /**
                     * 判断参数 ClsField 是否已赋值
                     * @return ClsField 是否已赋值
                     * 
                     */
                    bool ClsFieldHasBeenSet() const;

                    /**
                     * 获取<p>Column name of the data lake computing service table</p>
                     * @return DlcField <p>Column name of the data lake computing service table</p>
                     * 
                     */
                    std::string GetDlcField() const;

                    /**
                     * 设置<p>Column name of the data lake computing service table</p>
                     * @param _dlcField <p>Column name of the data lake computing service table</p>
                     * 
                     */
                    void SetDlcField(const std::string& _dlcField);

                    /**
                     * 判断参数 DlcField 是否已赋值
                     * @return DlcField 是否已赋值
                     * 
                     */
                    bool DlcFieldHasBeenSet() const;

                    /**
                     * 获取<p>Data lake computing service field Type</p><p>Enumeration value:</p><ul><li>int|string|struct: See <a href="https://www.tencentcloud.com/document/product/1342/53778?from_cn_redirect=1#Column">Type definition in DLC Column</a></li></ul>
                     * @return DlcFieldType <p>Data lake computing service field Type</p><p>Enumeration value:</p><ul><li>int|string|struct: See <a href="https://www.tencentcloud.com/document/product/1342/53778?from_cn_redirect=1#Column">Type definition in DLC Column</a></li></ul>
                     * 
                     */
                    std::string GetDlcFieldType() const;

                    /**
                     * 设置<p>Data lake computing service field Type</p><p>Enumeration value:</p><ul><li>int|string|struct: See <a href="https://www.tencentcloud.com/document/product/1342/53778?from_cn_redirect=1#Column">Type definition in DLC Column</a></li></ul>
                     * @param _dlcFieldType <p>Data lake computing service field Type</p><p>Enumeration value:</p><ul><li>int|string|struct: See <a href="https://www.tencentcloud.com/document/product/1342/53778?from_cn_redirect=1#Column">Type definition in DLC Column</a></li></ul>
                     * 
                     */
                    void SetDlcFieldType(const std::string& _dlcFieldType);

                    /**
                     * 判断参数 DlcFieldType 是否已赋值
                     * @return DlcFieldType 是否已赋值
                     * 
                     */
                    bool DlcFieldTypeHasBeenSet() const;

                    /**
                     * 获取<p>Parsing failure padding field</p>
                     * @return FillField <p>Parsing failure padding field</p>
                     * 
                     */
                    std::string GetFillField() const;

                    /**
                     * 设置<p>Parsing failure padding field</p>
                     * @param _fillField <p>Parsing failure padding field</p>
                     * 
                     */
                    void SetFillField(const std::string& _fillField);

                    /**
                     * 判断参数 FillField 是否已赋值
                     * @return FillField 是否已赋值
                     * 
                     */
                    bool FillFieldHasBeenSet() const;

                    /**
                     * 获取<p>Whether to disable</p>
                     * @return Disable <p>Whether to disable</p>
                     * 
                     */
                    bool GetDisable() const;

                    /**
                     * 设置<p>Whether to disable</p>
                     * @param _disable <p>Whether to disable</p>
                     * 
                     */
                    void SetDisable(const bool& _disable);

                    /**
                     * 判断参数 Disable 是否已赋值
                     * @return Disable 是否已赋值
                     * 
                     */
                    bool DisableHasBeenSet() const;

                private:

                    /**
                     * <p>Field name in the cls log</p>
                     */
                    std::string m_clsField;
                    bool m_clsFieldHasBeenSet;

                    /**
                     * <p>Column name of the data lake computing service table</p>
                     */
                    std::string m_dlcField;
                    bool m_dlcFieldHasBeenSet;

                    /**
                     * <p>Data lake computing service field Type</p><p>Enumeration value:</p><ul><li>int|string|struct: See <a href="https://www.tencentcloud.com/document/product/1342/53778?from_cn_redirect=1#Column">Type definition in DLC Column</a></li></ul>
                     */
                    std::string m_dlcFieldType;
                    bool m_dlcFieldTypeHasBeenSet;

                    /**
                     * <p>Parsing failure padding field</p>
                     */
                    std::string m_fillField;
                    bool m_fillFieldHasBeenSet;

                    /**
                     * <p>Whether to disable</p>
                     */
                    bool m_disable;
                    bool m_disableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DLCFILEDINFO_H_
