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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_ORDERINFO_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_ORDERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * Return the reported order information
                */
                class OrderInfo : public AbstractModel
                {
                public:
                    OrderInfo();
                    ~OrderInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Account uin of the parent account
                     * @return Uin Account uin of the parent account
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置Account uin of the parent account
                     * @param _uin Account uin of the parent account
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Usage type
                     * @return PackageType Usage type
                     * 
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置Usage type
                     * @param _packageType Usage type
                     * 
                     */
                    void SetPackageType(const std::string& _packageType);

                    /**
                     * 判断参数 PackageType 是否已赋值
                     * @return PackageType 是否已赋值
                     * 
                     */
                    bool PackageTypeHasBeenSet() const;

                    /**
                     * 获取Order number unique identifier
                     * @return OrderId Order number unique identifier
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置Order number unique identifier
                     * @param _orderId Order number unique identifier
                     * 
                     */
                    void SetOrderId(const std::string& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取Report month, current month by default
                     * @return ReportMonth Report month, current month by default
                     * 
                     */
                    std::string GetReportMonth() const;

                    /**
                     * 设置Report month, current month by default
                     * @param _reportMonth Report month, current month by default
                     * 
                     */
                    void SetReportMonth(const std::string& _reportMonth);

                    /**
                     * 判断参数 ReportMonth 是否已赋值
                     * @return ReportMonth 是否已赋值
                     * 
                     */
                    bool ReportMonthHasBeenSet() const;

                    /**
                     * 获取Data update time
                     * @return Updated Data update time
                     * 
                     */
                    std::string GetUpdated() const;

                    /**
                     * 设置Data update time
                     * @param _updated Data update time
                     * 
                     */
                    void SetUpdated(const std::string& _updated);

                    /**
                     * 判断参数 Updated 是否已赋值
                     * @return Updated 是否已赋值
                     * 
                     */
                    bool UpdatedHasBeenSet() const;

                private:

                    /**
                     * Account uin of the parent account
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Usage type
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * Order number unique identifier
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * Report month, current month by default
                     */
                    std::string m_reportMonth;
                    bool m_reportMonthHasBeenSet;

                    /**
                     * Data update time
                     */
                    std::string m_updated;
                    bool m_updatedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_ORDERINFO_H_
