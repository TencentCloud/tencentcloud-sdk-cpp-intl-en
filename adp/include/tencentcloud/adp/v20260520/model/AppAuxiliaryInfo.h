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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APPAUXILIARYINFO_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APPAUXILIARYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AppAppeal.h>
#include <tencentcloud/adp/v20260520/model/SearchResourceStatusInfo.h>
#include <tencentcloud/adp/v20260520/model/SpecialStatusInfo.h>
#include <tencentcloud/adp/v20260520/model/AppSubStatusInfo.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Application auxiliary information - contains various auxiliary statuses and extended information (non-modifiable by users)
                */
                class AppAuxiliaryInfo : public AbstractModel
                {
                public:
                    AppAuxiliaryInfo();
                    ~AppAuxiliaryInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Appeal information.
                     * @return Appeal Appeal information.
                     * 
                     */
                    AppAppeal GetAppeal() const;

                    /**
                     * 设置Appeal information.
                     * @param _appeal Appeal information.
                     * 
                     */
                    void SetAppeal(const AppAppeal& _appeal);

                    /**
                     * 判断参数 Appeal 是否已赋值
                     * @return Appeal 是否已赋值
                     * 
                     */
                    bool AppealHasBeenSet() const;

                    /**
                     * 获取Search for resource status
                     * @return SearchResourceStatus Search for resource status
                     * 
                     */
                    SearchResourceStatusInfo GetSearchResourceStatus() const;

                    /**
                     * 设置Search for resource status
                     * @param _searchResourceStatus Search for resource status
                     * 
                     */
                    void SetSearchResourceStatus(const SearchResourceStatusInfo& _searchResourceStatus);

                    /**
                     * 判断参数 SearchResourceStatus 是否已赋值
                     * @return SearchResourceStatus 是否已赋值
                     * 
                     */
                    bool SearchResourceStatusHasBeenSet() const;

                    /**
                     * 获取Special status information
                     * @return SpecialStatusInfo Special status information
                     * 
                     */
                    SpecialStatusInfo GetSpecialStatusInfo() const;

                    /**
                     * 设置Special status information
                     * @param _specialStatusInfo Special status information
                     * 
                     */
                    void SetSpecialStatusInfo(const SpecialStatusInfo& _specialStatusInfo);

                    /**
                     * 判断参数 SpecialStatusInfo 是否已赋值
                     * @return SpecialStatusInfo 是否已赋值
                     * 
                     */
                    bool SpecialStatusInfoHasBeenSet() const;

                    /**
                     * 获取Sub-status information.
                     * @return SubStatus Sub-status information.
                     * 
                     */
                    AppSubStatusInfo GetSubStatus() const;

                    /**
                     * 设置Sub-status information.
                     * @param _subStatus Sub-status information.
                     * 
                     */
                    void SetSubStatus(const AppSubStatusInfo& _subStatus);

                    /**
                     * 判断参数 SubStatus 是否已赋值
                     * @return SubStatus 是否已赋值
                     * 
                     */
                    bool SubStatusHasBeenSet() const;

                private:

                    /**
                     * Appeal information.
                     */
                    AppAppeal m_appeal;
                    bool m_appealHasBeenSet;

                    /**
                     * Search for resource status
                     */
                    SearchResourceStatusInfo m_searchResourceStatus;
                    bool m_searchResourceStatusHasBeenSet;

                    /**
                     * Special status information
                     */
                    SpecialStatusInfo m_specialStatusInfo;
                    bool m_specialStatusInfoHasBeenSet;

                    /**
                     * Sub-status information.
                     */
                    AppSubStatusInfo m_subStatus;
                    bool m_subStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APPAUXILIARYINFO_H_
