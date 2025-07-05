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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_PGROUPINFO_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_PGROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * Array of permission groups
                */
                class PGroupInfo : public AbstractModel
                {
                public:
                    PGroupInfo();
                    ~PGroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Permission group ID
                     * @return PGroupId Permission group ID
                     * 
                     */
                    std::string GetPGroupId() const;

                    /**
                     * 设置Permission group ID
                     * @param _pGroupId Permission group ID
                     * 
                     */
                    void SetPGroupId(const std::string& _pGroupId);

                    /**
                     * 判断参数 PGroupId 是否已赋值
                     * @return PGroupId 是否已赋值
                     * 
                     */
                    bool PGroupIdHasBeenSet() const;

                    /**
                     * 获取Permission group name
                     * @return Name Permission group name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Permission group name
                     * @param _name Permission group name
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
                     * 获取Description
                     * @return DescInfo Description
                     * 
                     */
                    std::string GetDescInfo() const;

                    /**
                     * 设置Description
                     * @param _descInfo Description
                     * 
                     */
                    void SetDescInfo(const std::string& _descInfo);

                    /**
                     * 判断参数 DescInfo 是否已赋值
                     * @return DescInfo 是否已赋值
                     * 
                     */
                    bool DescInfoHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CDate Creation time
                     * 
                     */
                    std::string GetCDate() const;

                    /**
                     * 设置Creation time
                     * @param _cDate Creation time
                     * 
                     */
                    void SetCDate(const std::string& _cDate);

                    /**
                     * 判断参数 CDate 是否已赋值
                     * @return CDate 是否已赋值
                     * 
                     */
                    bool CDateHasBeenSet() const;

                    /**
                     * 获取The number of bound file system
                     * @return BindCfsNum The number of bound file system
                     * 
                     */
                    int64_t GetBindCfsNum() const;

                    /**
                     * 设置The number of bound file system
                     * @param _bindCfsNum The number of bound file system
                     * 
                     */
                    void SetBindCfsNum(const int64_t& _bindCfsNum);

                    /**
                     * 判断参数 BindCfsNum 是否已赋值
                     * @return BindCfsNum 是否已赋值
                     * 
                     */
                    bool BindCfsNumHasBeenSet() const;

                private:

                    /**
                     * Permission group ID
                     */
                    std::string m_pGroupId;
                    bool m_pGroupIdHasBeenSet;

                    /**
                     * Permission group name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_descInfo;
                    bool m_descInfoHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_cDate;
                    bool m_cDateHasBeenSet;

                    /**
                     * The number of bound file system
                     */
                    int64_t m_bindCfsNum;
                    bool m_bindCfsNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_PGROUPINFO_H_
