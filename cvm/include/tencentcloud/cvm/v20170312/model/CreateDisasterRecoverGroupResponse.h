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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_CREATEDISASTERRECOVERGROUPRESPONSE_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_CREATEDISASTERRECOVERGROUPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateDisasterRecoverGroup response structure.
                */
                class CreateDisasterRecoverGroupResponse : public AbstractModel
                {
                public:
                    CreateDisasterRecoverGroupResponse();
                    ~CreateDisasterRecoverGroupResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of spread placement group IDs.
                     * @return DisasterRecoverGroupId List of spread placement group IDs.
                     * 
                     */
                    std::string GetDisasterRecoverGroupId() const;

                    /**
                     * 判断参数 DisasterRecoverGroupId 是否已赋值
                     * @return DisasterRecoverGroupId 是否已赋值
                     * 
                     */
                    bool DisasterRecoverGroupIdHasBeenSet() const;

                    /**
                     * 获取Type of a spread placement group. Valid values:<br><li>HOST: physical machine.</li><li>SW: switch.</li><li>RACK: rack.</li>
                     * @return Type Type of a spread placement group. Valid values:<br><li>HOST: physical machine.</li><li>SW: switch.</li><li>RACK: rack.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Name of the spread placement group. The name must be 1-60 characters long and can contain both Chinese characters and English letters.
                     * @return Name Name of the spread placement group. The name must be 1-60 characters long and can contain both Chinese characters and English letters.
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
                     * 获取The maximum number of CVMs in a placement group.
                     * @return CvmQuotaTotal The maximum number of CVMs in a placement group.
                     * 
                     */
                    int64_t GetCvmQuotaTotal() const;

                    /**
                     * 判断参数 CvmQuotaTotal 是否已赋值
                     * @return CvmQuotaTotal 是否已赋值
                     * 
                     */
                    bool CvmQuotaTotalHasBeenSet() const;

                    /**
                     * 获取The current number of CVMs in a placement group.
                     * @return CurrentNum The current number of CVMs in a placement group.
                     * 
                     */
                    int64_t GetCurrentNum() const;

                    /**
                     * 判断参数 CurrentNum 是否已赋值
                     * @return CurrentNum 是否已赋值
                     * 
                     */
                    bool CurrentNumHasBeenSet() const;

                    /**
                     * 获取Creation time of the placement group.
                     * @return CreateTime Creation time of the placement group.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * List of spread placement group IDs.
                     */
                    std::string m_disasterRecoverGroupId;
                    bool m_disasterRecoverGroupIdHasBeenSet;

                    /**
                     * Type of a spread placement group. Valid values:<br><li>HOST: physical machine.</li><li>SW: switch.</li><li>RACK: rack.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Name of the spread placement group. The name must be 1-60 characters long and can contain both Chinese characters and English letters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * The maximum number of CVMs in a placement group.
                     */
                    int64_t m_cvmQuotaTotal;
                    bool m_cvmQuotaTotalHasBeenSet;

                    /**
                     * The current number of CVMs in a placement group.
                     */
                    int64_t m_currentNum;
                    bool m_currentNumHasBeenSet;

                    /**
                     * Creation time of the placement group.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_CREATEDISASTERRECOVERGROUPRESPONSE_H_
