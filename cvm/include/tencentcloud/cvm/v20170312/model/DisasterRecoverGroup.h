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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DISASTERRECOVERGROUP_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DISASTERRECOVERGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Information on disaster recovery groups
                */
                class DisasterRecoverGroup : public AbstractModel
                {
                public:
                    DisasterRecoverGroup();
                    ~DisasterRecoverGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of a spread placement group.
                     * @return DisasterRecoverGroupId ID of a spread placement group.
                     */
                    std::string GetDisasterRecoverGroupId() const;

                    /**
                     * 设置ID of a spread placement group.
                     * @param DisasterRecoverGroupId ID of a spread placement group.
                     */
                    void SetDisasterRecoverGroupId(const std::string& _disasterRecoverGroupId);

                    /**
                     * 判断参数 DisasterRecoverGroupId 是否已赋值
                     * @return DisasterRecoverGroupId 是否已赋值
                     */
                    bool DisasterRecoverGroupIdHasBeenSet() const;

                    /**
                     * 获取Name of a spread placement group, which must be 1-60 characters long.
                     * @return Name Name of a spread placement group, which must be 1-60 characters long.
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of a spread placement group, which must be 1-60 characters long.
                     * @param Name Name of a spread placement group, which must be 1-60 characters long.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Type of a spread placement group. Valid values: <br><li>HOST: physical machine <br><li>SW: switch <br><li>RACK: rack.
                     * @return Type Type of a spread placement group. Valid values: <br><li>HOST: physical machine <br><li>SW: switch <br><li>RACK: rack.
                     */
                    std::string GetType() const;

                    /**
                     * 设置Type of a spread placement group. Valid values: <br><li>HOST: physical machine <br><li>SW: switch <br><li>RACK: rack.
                     * @param Type Type of a spread placement group. Valid values: <br><li>HOST: physical machine <br><li>SW: switch <br><li>RACK: rack.
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取The maximum number of CVMs that can be hosted in a spread placement group.
                     * @return CvmQuotaTotal The maximum number of CVMs that can be hosted in a spread placement group.
                     */
                    int64_t GetCvmQuotaTotal() const;

                    /**
                     * 设置The maximum number of CVMs that can be hosted in a spread placement group.
                     * @param CvmQuotaTotal The maximum number of CVMs that can be hosted in a spread placement group.
                     */
                    void SetCvmQuotaTotal(const int64_t& _cvmQuotaTotal);

                    /**
                     * 判断参数 CvmQuotaTotal 是否已赋值
                     * @return CvmQuotaTotal 是否已赋值
                     */
                    bool CvmQuotaTotalHasBeenSet() const;

                    /**
                     * 获取The current number of CVMs in a spread placement group.
                     * @return CurrentNum The current number of CVMs in a spread placement group.
                     */
                    int64_t GetCurrentNum() const;

                    /**
                     * 设置The current number of CVMs in a spread placement group.
                     * @param CurrentNum The current number of CVMs in a spread placement group.
                     */
                    void SetCurrentNum(const int64_t& _currentNum);

                    /**
                     * 判断参数 CurrentNum 是否已赋值
                     * @return CurrentNum 是否已赋值
                     */
                    bool CurrentNumHasBeenSet() const;

                    /**
                     * 获取The list of CVM IDs in a spread placement group.
Note: This field may return null, indicating that no valid value was found.
                     * @return InstanceIds The list of CVM IDs in a spread placement group.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置The list of CVM IDs in a spread placement group.
Note: This field may return null, indicating that no valid value was found.
                     * @param InstanceIds The list of CVM IDs in a spread placement group.
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取Creation time of a spread placement group.
Note: This field may return null, indicating that no valid value is found.
                     * @return CreateTime Creation time of a spread placement group.
Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time of a spread placement group.
Note: This field may return null, indicating that no valid value is found.
                     * @param CreateTime Creation time of a spread placement group.
Note: This field may return null, indicating that no valid value is found.
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * ID of a spread placement group.
                     */
                    std::string m_disasterRecoverGroupId;
                    bool m_disasterRecoverGroupIdHasBeenSet;

                    /**
                     * Name of a spread placement group, which must be 1-60 characters long.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Type of a spread placement group. Valid values: <br><li>HOST: physical machine <br><li>SW: switch <br><li>RACK: rack.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The maximum number of CVMs that can be hosted in a spread placement group.
                     */
                    int64_t m_cvmQuotaTotal;
                    bool m_cvmQuotaTotalHasBeenSet;

                    /**
                     * The current number of CVMs in a spread placement group.
                     */
                    int64_t m_currentNum;
                    bool m_currentNumHasBeenSet;

                    /**
                     * The list of CVM IDs in a spread placement group.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Creation time of a spread placement group.
Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DISASTERRECOVERGROUP_H_
