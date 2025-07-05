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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_COSDETAILSETS_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_COSDETAILSETS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * Information about the data structure of the returned COS usage details
                */
                class CosDetailSets : public AbstractModel
                {
                public:
                    CosDetailSets();
                    ~CosDetailSets() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Bucket name
                     * @return BucketName Bucket name
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置Bucket name
                     * @param _bucketName Bucket name
                     * 
                     */
                    void SetBucketName(const std::string& _bucketName);

                    /**
                     * 判断参数 BucketName 是否已赋值
                     * @return BucketName 是否已赋值
                     * 
                     */
                    bool BucketNameHasBeenSet() const;

                    /**
                     * 获取The start time of the usage
                     * @return DosageBeginTime The start time of the usage
                     * 
                     */
                    std::string GetDosageBeginTime() const;

                    /**
                     * 设置The start time of the usage
                     * @param _dosageBeginTime The start time of the usage
                     * 
                     */
                    void SetDosageBeginTime(const std::string& _dosageBeginTime);

                    /**
                     * 判断参数 DosageBeginTime 是否已赋值
                     * @return DosageBeginTime 是否已赋值
                     * 
                     */
                    bool DosageBeginTimeHasBeenSet() const;

                    /**
                     * 获取The end time of the usage
                     * @return DosageEndTime The end time of the usage
                     * 
                     */
                    std::string GetDosageEndTime() const;

                    /**
                     * 设置The end time of the usage
                     * @param _dosageEndTime The end time of the usage
                     * 
                     */
                    void SetDosageEndTime(const std::string& _dosageEndTime);

                    /**
                     * 判断参数 DosageEndTime 是否已赋值
                     * @return DosageEndTime 是否已赋值
                     * 
                     */
                    bool DosageEndTimeHasBeenSet() const;

                    /**
                     * 获取Subproduct name
                     * @return SubProductCodeName Subproduct name
                     * 
                     */
                    std::string GetSubProductCodeName() const;

                    /**
                     * 设置Subproduct name
                     * @param _subProductCodeName Subproduct name
                     * 
                     */
                    void SetSubProductCodeName(const std::string& _subProductCodeName);

                    /**
                     * 判断参数 SubProductCodeName 是否已赋值
                     * @return SubProductCodeName 是否已赋值
                     * 
                     */
                    bool SubProductCodeNameHasBeenSet() const;

                    /**
                     * 获取Billable item name
                     * @return BillingItemCodeName Billable item name
                     * 
                     */
                    std::string GetBillingItemCodeName() const;

                    /**
                     * 设置Billable item name
                     * @param _billingItemCodeName Billable item name
                     * 
                     */
                    void SetBillingItemCodeName(const std::string& _billingItemCodeName);

                    /**
                     * 判断参数 BillingItemCodeName 是否已赋值
                     * @return BillingItemCodeName 是否已赋值
                     * 
                     */
                    bool BillingItemCodeNameHasBeenSet() const;

                    /**
                     * 获取Usage
                     * @return DosageValue Usage
                     * 
                     */
                    std::string GetDosageValue() const;

                    /**
                     * 设置Usage
                     * @param _dosageValue Usage
                     * 
                     */
                    void SetDosageValue(const std::string& _dosageValue);

                    /**
                     * 判断参数 DosageValue 是否已赋值
                     * @return DosageValue 是否已赋值
                     * 
                     */
                    bool DosageValueHasBeenSet() const;

                    /**
                     * 获取Unit of the billable item
                     * @return Unit Unit of the billable item
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置Unit of the billable item
                     * @param _unit Unit of the billable item
                     * 
                     */
                    void SetUnit(const std::string& _unit);

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     * 
                     */
                    bool UnitHasBeenSet() const;

                private:

                    /**
                     * Bucket name
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * The start time of the usage
                     */
                    std::string m_dosageBeginTime;
                    bool m_dosageBeginTimeHasBeenSet;

                    /**
                     * The end time of the usage
                     */
                    std::string m_dosageEndTime;
                    bool m_dosageEndTimeHasBeenSet;

                    /**
                     * Subproduct name
                     */
                    std::string m_subProductCodeName;
                    bool m_subProductCodeNameHasBeenSet;

                    /**
                     * Billable item name
                     */
                    std::string m_billingItemCodeName;
                    bool m_billingItemCodeNameHasBeenSet;

                    /**
                     * Usage
                     */
                    std::string m_dosageValue;
                    bool m_dosageValueHasBeenSet;

                    /**
                     * Unit of the billable item
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_COSDETAILSETS_H_
