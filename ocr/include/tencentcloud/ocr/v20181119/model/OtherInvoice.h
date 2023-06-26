/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_OTHERINVOICE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_OTHERINVOICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/OtherInvoiceItem.h>
#include <tencentcloud/ocr/v20181119/model/OtherInvoiceList.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * Other invoices
                */
                class OtherInvoice : public AbstractModel
                {
                public:
                    OtherInvoice();
                    ~OtherInvoice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Invoice title
                     * @return Title Invoice title
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置Invoice title
                     * @param _title Invoice title
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取Amount
                     * @return Total Amount
                     * 
                     */
                    std::string GetTotal() const;

                    /**
                     * 设置Amount
                     * @param _total Amount
                     * 
                     */
                    void SetTotal(const std::string& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取List
                     * @return OtherInvoiceListItems List
                     * 
                     */
                    std::vector<OtherInvoiceItem> GetOtherInvoiceListItems() const;

                    /**
                     * 设置List
                     * @param _otherInvoiceListItems List
                     * 
                     */
                    void SetOtherInvoiceListItems(const std::vector<OtherInvoiceItem>& _otherInvoiceListItems);

                    /**
                     * 判断参数 OtherInvoiceListItems 是否已赋值
                     * @return OtherInvoiceListItems 是否已赋值
                     * 
                     */
                    bool OtherInvoiceListItemsHasBeenSet() const;

                    /**
                     * 获取Table
                     * @return OtherInvoiceTableItems Table
                     * 
                     */
                    std::vector<OtherInvoiceList> GetOtherInvoiceTableItems() const;

                    /**
                     * 设置Table
                     * @param _otherInvoiceTableItems Table
                     * 
                     */
                    void SetOtherInvoiceTableItems(const std::vector<OtherInvoiceList>& _otherInvoiceTableItems);

                    /**
                     * 判断参数 OtherInvoiceTableItems 是否已赋值
                     * @return OtherInvoiceTableItems 是否已赋值
                     * 
                     */
                    bool OtherInvoiceTableItemsHasBeenSet() const;

                private:

                    /**
                     * Invoice title
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * Amount
                     */
                    std::string m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * List
                     */
                    std::vector<OtherInvoiceItem> m_otherInvoiceListItems;
                    bool m_otherInvoiceListItemsHasBeenSet;

                    /**
                     * Table
                     */
                    std::vector<OtherInvoiceList> m_otherInvoiceTableItems;
                    bool m_otherInvoiceTableItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_OTHERINVOICE_H_
