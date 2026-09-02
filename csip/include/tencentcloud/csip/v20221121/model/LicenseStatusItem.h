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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_LICENSESTATUSITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_LICENSESTATUSITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Authorization status summary of each billing item
                */
                class LicenseStatusItem : public AbstractModel
                {
                public:
                    LicenseStatusItem();
                    ~LicenseStatusItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Resource ID</p>
                     * @return ResourceId <p>Resource ID</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>Resource ID</p>
                     * @param _resourceId <p>Resource ID</p>
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取<p>Authorization type (ENTERPRISE_HP=flagship edition/ADVANCED_HP=pro edition/RASP)</p>
                     * @return LicenseType <p>Authorization type (ENTERPRISE_HP=flagship edition/ADVANCED_HP=pro edition/RASP)</p>
                     * 
                     */
                    std::string GetLicenseType() const;

                    /**
                     * 设置<p>Authorization type (ENTERPRISE_HP=flagship edition/ADVANCED_HP=pro edition/RASP)</p>
                     * @param _licenseType <p>Authorization type (ENTERPRISE_HP=flagship edition/ADVANCED_HP=pro edition/RASP)</p>
                     * 
                     */
                    void SetLicenseType(const std::string& _licenseType);

                    /**
                     * 判断参数 LicenseType 是否已赋值
                     * @return LicenseType 是否已赋值
                     * 
                     */
                    bool LicenseTypeHasBeenSet() const;

                    /**
                     * 获取<p>Authorization name (flagship edition/pro edition/RASP)</p>
                     * @return Name <p>Authorization name (flagship edition/pro edition/RASP)</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Authorization name (flagship edition/pro edition/RASP)</p>
                     * @param _name <p>Authorization name (flagship edition/pro edition/RASP)</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>Authorization type. 0: host authorization. 1: RASP authorization.</p>
                     * @return Category <p>Authorization type. 0: host authorization. 1: RASP authorization.</p>
                     * 
                     */
                    int64_t GetCategory() const;

                    /**
                     * 设置<p>Authorization type. 0: host authorization. 1: RASP authorization.</p>
                     * @param _category <p>Authorization type. 0: host authorization. 1: RASP authorization.</p>
                     * 
                     */
                    void SetCategory(const int64_t& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取<p>Total.</p>
                     * @return TotalNum <p>Total.</p>
                     * 
                     */
                    int64_t GetTotalNum() const;

                    /**
                     * 设置<p>Total.</p>
                     * @param _totalNum <p>Total.</p>
                     * 
                     */
                    void SetTotalNum(const int64_t& _totalNum);

                    /**
                     * 判断参数 TotalNum 是否已赋值
                     * @return TotalNum 是否已赋值
                     * 
                     */
                    bool TotalNumHasBeenSet() const;

                    /**
                     * 获取<p>Used</p>
                     * @return UsedNum <p>Used</p>
                     * 
                     */
                    int64_t GetUsedNum() const;

                    /**
                     * 设置<p>Used</p>
                     * @param _usedNum <p>Used</p>
                     * 
                     */
                    void SetUsedNum(const int64_t& _usedNum);

                    /**
                     * 判断参数 UsedNum 是否已赋值
                     * @return UsedNum 是否已赋值
                     * 
                     */
                    bool UsedNumHasBeenSet() const;

                    /**
                     * 获取<p>Remaining</p>
                     * @return RemainNum <p>Remaining</p>
                     * 
                     */
                    int64_t GetRemainNum() const;

                    /**
                     * 设置<p>Remaining</p>
                     * @param _remainNum <p>Remaining</p>
                     * 
                     */
                    void SetRemainNum(const int64_t& _remainNum);

                    /**
                     * 判断参数 RemainNum 是否已赋值
                     * @return RemainNum 是否已赋值
                     * 
                     */
                    bool RemainNumHasBeenSet() const;

                    /**
                     * 获取<p>Earliest start time (format: 2006-01-02 15:04:05)</p>
                     * @return BeginTime <p>Earliest start time (format: 2006-01-02 15:04:05)</p>
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置<p>Earliest start time (format: 2006-01-02 15:04:05)</p>
                     * @param _beginTime <p>Earliest start time (format: 2006-01-02 15:04:05)</p>
                     * 
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取<p>Latest expiration time (format: 2006-01-02 15:04:05)</p>
                     * @return EndTime <p>Latest expiration time (format: 2006-01-02 15:04:05)</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>Latest expiration time (format: 2006-01-02 15:04:05)</p>
                     * @param _endTime <p>Latest expiration time (format: 2006-01-02 15:04:05)</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * <p>Resource ID</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>Authorization type (ENTERPRISE_HP=flagship edition/ADVANCED_HP=pro edition/RASP)</p>
                     */
                    std::string m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                    /**
                     * <p>Authorization name (flagship edition/pro edition/RASP)</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Authorization type. 0: host authorization. 1: RASP authorization.</p>
                     */
                    int64_t m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * <p>Total.</p>
                     */
                    int64_t m_totalNum;
                    bool m_totalNumHasBeenSet;

                    /**
                     * <p>Used</p>
                     */
                    int64_t m_usedNum;
                    bool m_usedNumHasBeenSet;

                    /**
                     * <p>Remaining</p>
                     */
                    int64_t m_remainNum;
                    bool m_remainNumHasBeenSet;

                    /**
                     * <p>Earliest start time (format: 2006-01-02 15:04:05)</p>
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * <p>Latest expiration time (format: 2006-01-02 15:04:05)</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_LICENSESTATUSITEM_H_
