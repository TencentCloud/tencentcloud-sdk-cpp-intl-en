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

#include <tencentcloud/clb/v20180317/model/AssociateTargetGroupsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace rapidjson;
using namespace std;

AssociateTargetGroupsRequest::AssociateTargetGroupsRequest() :
    m_associationsHasBeenSet(false)
{
}

string AssociateTargetGroupsRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_associationsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Associations";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_associations.begin(); itr != m_associations.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<TargetGroupAssociation> AssociateTargetGroupsRequest::GetAssociations() const
{
    return m_associations;
}

void AssociateTargetGroupsRequest::SetAssociations(const vector<TargetGroupAssociation>& _associations)
{
    m_associations = _associations;
    m_associationsHasBeenSet = true;
}

bool AssociateTargetGroupsRequest::AssociationsHasBeenSet() const
{
    return m_associationsHasBeenSet;
}


